#include<stdio.h>
int queue[12];
int front=0;
int rear=-1;
int MAX;
int arr[12];
#include"queue.h"
int main()
{
  printf("!!!! queue operations in input method !!!!\n\n");
  printf("enter number of elements in queue :");
  scanf("%d",&MAX);
  printf("\nenter the elements:\n");
 for(int i=0;i<MAX;i++)
 {
   int data;
   printf("\nenter queue[%d]:",i);
   scanf("%d",&data);
   insert(data);
 }
 prints(queue);
printf("\n");
 for(int i=0;i<MAX;i++)
 {
  arr[i]=queue[front];
  delete();
 }
 printf("\narray containg deleted elements");
 for(int i=0;i<MAX;i++)
 {
   printf("\narr[%d]=%d",i,arr[i]);
 }

 printf("\n\nafter deletion:\n");
 prints(queue);
}
