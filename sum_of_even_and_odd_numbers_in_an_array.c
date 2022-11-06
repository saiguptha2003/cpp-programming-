//Write a program to print the sum of even and odd numbers in an array
#include<stdio.h>
int main()
{
int i,n,sumod=0,sumev=0;
int a[12];
printf("enter the range of array =");
scanf("%d",&n);
printf("enter the elements :");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i,n;i++)
{
  if(i%2==0){
    sumev=sumev+a[i];
  }
  else{
    sumod=sumod+a[i];
  }
}
printf("sum of event numbers:%d",sumev);
printf("sum of odd numbers:%d",sumod);
return(0);
}
