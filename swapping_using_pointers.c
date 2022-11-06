#include <stdio.h>

int main()
{
    int a=13,b=12,*p,*q,temp;
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swaping=%d,%d",*p,*q);
    
	return 0;
}

