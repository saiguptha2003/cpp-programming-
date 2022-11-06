//1)  Write a program to find the sum of the diagonal elements in an Array(Trace of a given matrix)
#include<stdio.h>
int main()
{
    int i, j, rows, columns, a[10][10], Sum = 0;
    printf("\n Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);
    printf("\n Enter the Matrix Elements:-\n");
    for(rows = 0; rows < i; rows++)
    {
       for(columns = 0;columns < j;columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    for(rows = 0; rows < i; rows++)
    {
        Sum = Sum + a[rows][rows];
    }
    printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
    return 0;
}
