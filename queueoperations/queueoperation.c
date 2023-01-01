#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=0;
int rear=-1;
#include"queue.h"
void main()
{
  printf("\t!!!queue opereations!!!");
  insert(23);
  insert(34);
  insert(78);
  insert(26);
  insert(89);
  printf("\n");
  first();
  printf("\n");
  delete();
  delete();
  printf("\n");
  first();
  printf("\n");
  prints();
  insert(89);
}
