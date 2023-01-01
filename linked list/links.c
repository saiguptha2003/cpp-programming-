#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *link;
};
struct node* add_node_at_end(struct node*ptr, int data)
{
  struct node *temp =malloc(sizeof(struct node));
  temp->data=data;
  temp->link=NULL;
  ptr->link=temp;
  return temp;
}
struct node* add_beg(struct node* head,int data)
{
  struct node *temp=malloc(sizeof(struct node));
  temp->data=data;
  temp->link=NULL;
  temp->link=head;
  head=temp;
  return temp;

}
int main()
{
  struct node *head=malloc(sizeof(struct node));
  head->data=30;
  head->link=NULL;
  struct node *ptr=head;

  ptr=add_node_at_end(ptr,98);
  ptr=add_node_at_end(ptr,67);
  ptr-add_node_at_end(ptr,78);
  head=add_beg(head,78);
  ptr=head;
  while(ptr!=NULL)
  {
    printf("%d,,",ptr->data);
    ptr=ptr->link;

  }
  return 0;


}
