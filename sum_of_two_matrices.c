/*b)Write a program to find the sum of two matrices*/

#include <stdio.h>
int main()
{
int i,j,r1,c1, a[10][10], b[10][10];
printf("Enter Order of Matrix A & B: ");
scanf("%d %d", &r1, &c1);
printf("Enter Elements of Matrix of A: \n");
for( i=0; i< r1; i++)
{
for( j=0; j<c1; j++)
scanf("%d", &a[ i ][ j ]);
}
printf("Enter Elements of Matrix of B: \n");
for( i=0; i< r1; i++)
{
for( j=0; j < c1; j++)
scanf("%d", &b[ i ][ j ]);
}
printf("\n Matrix Addition \n");
for( i=0; i< r1; i++)
{
for( j=0; j < c1; j++)
printf("%d\t", a[ i ][ j ] + b[ i ][ j ]);
printf ("\n");
}
}
output:-
C:\Users\pandu\CLionProjects\untitled14\cmake-build-debug\untitled14.exe
Enter Order of Matrix A & B:2
2
 Enter Elements of Matrix of A:
2
5
4
2
Enter Elements of Matrix of B:
4
4
4
4

 Matrix Addition
6       9
8       6

Process finished with exit code 0

