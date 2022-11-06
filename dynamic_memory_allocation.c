#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,n;
  int *ptr=(int*)malloc(n*sizeof(int));
  printf("enter the number of integetrs:");
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;i++)
  {
    printf("enter the %d elemt:",i);
    scanf("%d",ptr+i);
  }
  for(i=0;i<n;i++)
  {
    printf("\n %d = %d\n",i,*(ptr+i));
  }
  ptr=(int*)realloc(ptr,3*sizeof(int));
  printf("enter the new list :");
  for(i=n;i<n+3;i++){
    scanf("%d",ptr+i);
  }
  for(i=0;i<n+3;i++)
  {
  printf("\nintegers list : %d",*(ptr+i));
  }
free(ptr);
ptr=NULL;
}
