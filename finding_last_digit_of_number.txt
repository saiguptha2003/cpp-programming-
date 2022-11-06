/*Write a C program to input a number from user and count number of digits in the given integer using loop.*/
#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("enter the number=");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("last digit=%d",count);
    return(0);
}
output:-
C:\Users\pandu\CLionProjects\untitled12\cmake-build-debug\untitled12.exe
enter the number=123
last digit=3
Process finished with exit code 0
