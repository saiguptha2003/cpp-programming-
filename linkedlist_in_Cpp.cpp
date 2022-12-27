
#include<iostream>
#include<typeinfo>
using namespace std;
class link
{
     public:
     int data;
     link *next;
};
void insertion_at_head(link **head,int data)
{
     link *newnode=new link();
     newnode->data=data;
     newnode->next=*head;
     *head=newnode;
}
void insertion_at_end(link **head,int data)
{
     link *newnode=new link();
     newnode->data=data;
     newnode->next=NULL;
     link *last=*head;
     if(*head==NULL)
     {
          *head=newnode;
          return;
     }
     while(last->next!=NULL)
     {
          last=last->next;
     }
     last->next=newnode;
     return;

}
void print(link *head)
{
     while(head!=NULL)
     {
          cout<<head->data<<" ";
          head=head->next;
     }
}
int main()
{
     link *head=NULL;
     for(int i=0;i<5;i++)
     {
          
          insertion_at_head(&head,i);
     }
     print(head);
     
}
