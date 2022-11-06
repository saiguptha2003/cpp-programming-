#include<stdio.h>
int main()
{
  int a[6]={1,2,3,4,5,6};
  int *ptr,i;
  ptr=a;
  for(i=0;i<6;i++)
  {
    printf("\nelements of array:%d",*(ptr+i));
  }
  for(i=0;i<6;i++)
  {
    printf("\nelements address in array:%d",(a+i));
}
  return(0);
}
