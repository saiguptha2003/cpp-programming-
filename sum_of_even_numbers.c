/*Lets write a C program to find sum of all the even numbers from 1 to N, using while loop. */
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter the rage of even numbers=");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    printf("sum of n even numbers=%d",sum) ;
    return(0);
}

output:-
C:\Users\pandu\CLionProjects\untitled12\cmake-build-debug\untitled12.exe
enter the rage of even numbers=5
sum of n even numbers=6
Process finished with exit code 0
