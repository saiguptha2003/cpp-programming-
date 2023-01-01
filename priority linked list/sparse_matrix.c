#include <stdio.h>
  #include <stdlib.h>

  /* structure to store data */
  struct node {
        int row, col, val;
        struct node *right, *down;
  };

  /* structure of column head */
  struct chead {
        int col;
        struct chead *next;
        struct node *down;
  };

  /* structure of row head */
  struct rhead {
        int row;
        struct rhead *next;
        struct node *right;
  };

  /* structure of additional head */
  struct sparsehead {
        int rowCount, colCount;
        struct rhead *frow;
        struct chead *fcol;
  };

  /* main node */
  struct sparse {
        int row, *data;
        struct node *nodePtr;
        struct sparsehead *smatrix;
        struct rhead **rowPtr;
        struct chead **colPtr;
  };

  int count = 0;

  /* Establish row and column links */
  void initialize(struct sparse *sPtr, int row, int col) {
        int i;
        sPtr->rowPtr = (struct rhead **) calloc(1, (sizeof (struct rhead) * row));
        sPtr->colPtr = (struct chead **) calloc(1, (sizeof (struct chead) * col));
        for (i = 0; i < row; i++)
                sPtr->rowPtr[i] = (struct rhead *) calloc(1, sizeof (struct rhead));

        for (i = 0; i < row - 1; i++) {
                sPtr->rowPtr[i]->row = i;
                sPtr->rowPtr[i]->next = sPtr->rowPtr[i + 1];
        }

        for (i = 0; i < col; i++)
                sPtr->colPtr[i] = (struct chead *) calloc(1, sizeof (struct chead));

        for (i = 0; i < col - 1; i++) {
                sPtr->colPtr[i]->col = i;
                sPtr->colPtr[i]->next = sPtr->colPtr[i + 1];
        }

        /* update additional head information  */
        sPtr->smatrix = (struct sparsehead *) calloc(1, sizeof (struct sparsehead));
        sPtr->smatrix->rowCount = row;
        sPtr->smatrix->colCount = col;
        sPtr->smatrix->frow = sPtr->rowPtr[0];
        sPtr->smatrix->fcol = sPtr->colPtr[0];
        return;
  }

   /* input sparse matrix */
  void inputMatrix(struct sparse *sPtr, int row, int col) {
        int i, n, x = 0, y = 0;
        n = row * col;
        sPtr->data = (int *) malloc(sizeof (int) * n);
        for (i = 0; i < n; i++) {
                if (y != 0 && y % col == 0) {
                        x++;
                        y = 0;
                }
                printf("data[%d][%d] : ", x, y);
                scanf("%d", &(sPtr->data[i]));
                if (sPtr->data[i])
                        count++;
                y++;
        }
        return;
  }

  /* display sparse matrix */
  void displayInputMatrix(struct sparse s, int row, int col) {
        int i;
        for (i = 0; i < row * col; i++) {
                if (i % col == 0)
                        printf("\n");
                printf("%d ", s.data[i]);
        }
        printf("\n");
        return;
  }

  /* create 3-tuple array from input sparse matrix */
  void createThreeTuple(struct sparse *sPtr, struct sparse s, int row, int col) {
        int i, j = 0, x = 0, y = 0, l = 0;
        sPtr->row = count;
        sPtr->data = (int *) malloc(sizeof (int) * (sPtr->row * 3));

        for (i = 0; i < row * col; i++) {
                if (y % col == 0 && y != 0) {
                        x++;
                        y = 0;
                }
                if (s.data[i] != 0) {
                        sPtr->data[l++] = x;
                        sPtr->data[l++] = y;
                        sPtr->data[l++] = s.data[i];
                }
                y++;
        }
        return;
  }

  /* insert element to the list */
  void insert(struct sparse *sPtr, int row, int col, int val) {
        struct rhead *rPtr;
        struct chead *cPtr;
        struct node *n1, *n2;
        struct sparsehead *smat = sPtr->smatrix;
        int i, j;

        /* update node values */
        sPtr->nodePtr = (struct node *) malloc(sizeof (struct node));
        sPtr->nodePtr->row = row;
        sPtr->nodePtr->col = col;
        sPtr->nodePtr->val = val;

        /* get the row headnode */
        rPtr = smat->frow;

        /* move to corresponding row */
        for (i = 0; i < row; i++)
                rPtr = rPtr->next;

        /* traverse the nodes in current and locate new node */
        n1 = rPtr->right;
        if (!n1) {
                rPtr->right = sPtr->nodePtr;
                sPtr->nodePtr->right = NULL;
        } else {
                while (n1 && n1->col < col) {
                        n2 = n1;
                        n1 = n1->right;
                }
                n2->right = sPtr->nodePtr;
                sPtr->nodePtr->right = NULL;
        }

        /* get the column head node */
        cPtr = sPtr->smatrix->fcol;

        /* move to corresponding column (1/2/3..) */
        for (i = 0; i < col; i++)
                cPtr = cPtr->next;

        /*
         * traverse the node in current column and locate
         * new node in appropriate position
         */
        n1 = cPtr->down;

        if (!n1) {
                cPtr->down = sPtr->nodePtr;
                sPtr->nodePtr->down = NULL;
        } else {
                while (n1 && n1->row < row) {
                        n2 = n1;
                        n1 = n1->down;
                }
                n2->down = sPtr->nodePtr;
                sPtr->nodePtr->down = NULL;
        }
        return;
  }

  /* create list for 3-Tuple representation */
  void createList(struct sparse *sPtr) {
        int i, j = 0;
        for (i = 0; i < sPtr->row; i++) {
                insert(sPtr, sPtr->data[j], sPtr->data[j + 1], sPtr->data[j + 2]);
                j = j + 3;
        }
        return;
  }

  /* Display data from linked list of 3-Tuple*/
  void displayList(struct sparse s) {
        struct node *n;
        int row = s.smatrix->rowCount, i;
        for (i = 0; i < row; i++) {
                n = s.rowPtr[i]->right;
                if (n) {
                        while (n->right) {
                                printf("%d  %d  %d\n", n->row, n->col, n->val);
                                n =  n->right;
                        }
                        if (n->row == i) {
                                printf("%d  %d  %d\n", n->row, n->col, n->val);
                        }
                }
        }
        printf("\n");
  }

  int main() {
        struct sparse input, output;
        int row, col;
        printf("Enter the rows and columns:");
        scanf("%d%d", &row, &col);
        initialize(&input, row, col);
        initialize(&output, row, col);
        inputMatrix(&input, row, col);
        printf("Given Sparse Matrix has %d non-zero elements\n", count);
        printf("Input Sparse Matrix:\n");
        displayInputMatrix(input, row, col);
        printf("\n\n");
        createThreeTuple(&output, input, row, col);
        createList(&output);
        printf("3-Tuple representation of the given sparse matrix:\n");
        printf("%d  %d  %d\n", output.smatrix[0].rowCount,
                output.smatrix[0].colCount, count);
        displayList(output);
        return 0;
  }
