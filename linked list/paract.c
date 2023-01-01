#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *link;
};

void count_of_node(struct node *head)
{
  int count=0;
  if(head==NULL)
  {
    printf("linked list is empty");
  }
  struct node *ptr =NULL;
  ptr=head;
  while(ptr!=NULL)
  {
    count++;
    ptr=ptr->link;

  }
      printf("\nnumber of nodes:%d",count);
}

int main()
{
  struct node *head=malloc(sizeof(struct node));
  head->data=90;
  head->link=NULL;
  struct node *current=malloc(sizeof(struct node));
  current->data=89;
  current->link=NULL;
  head->link=current;
  current=malloc(sizeof(struct node));
  current->data=78;
  current->link=NULL;
  current->link->link=current;
  count_of_node(head);

}
