/*Write a C program to find sum of all natural numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    float ave;

    printf("enter range=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+= i;

    }
    printf("\nsum of natural numbers=%d",sum);
    ave=sum/n;
    printf("\naverage of n natural numbers=%.2f",ave);
    return(0);

}
output:-
C:\Users\pandu\CLionProjects\untitled12\cmake-build-debug\untitled12.exe
enter range=7

sum of natural numbers=28
average of n natural numbers=4.00
Process finished with exit code 0
