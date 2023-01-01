#include<stdio.h>
#define MAX 5
int front=-1;
int rear=-1;
int queue[MAX];
int insert(int data)
{

    if(front==0 && rear==MAX-1) //checking queue is full or not
    {
        printf("\nqueue is full");
    }
if(front == -1) //checking front ptr pointed to -1  is yes then intialising to 0
{
front = 0;
rear = 0;
}
else
{
if(rear == MAX-1)//checking is queue rear pointer is equal to maximum size of array
rear = 0;
else
rear = rear+1;   //rear++ increment
}
queue[rear] =data;  //assign data variable to queue front element array
printf("\ninserted data-->%d",data);
}
int delete()
{
     printf("\nelement is deleted");
    if(front==-1)  //checking queue is empty
    {
        printf("\nqueue is empty");
    }
    if(front==rear)  //checking queue front and rear pointer pointing to same memory location
    {
        front==rear==-1;//reintizilsing ptr to -1
    }
    if(front=MAX-1)  // checking front ptr is pointing to MAX-1 location
    {
        front=0;
    }
    else
    {
        front=front+1;  //increment front ptr by 1

    }
}
void print()
{
        for(int i=0;i<MAX;i++) //loop conditions
    {
       printf("\nqueue[%d]-->%d",i,queue[i]); //printing elements in queue
    }
}
int main()
{
    printf("\n!!circular queue operations!!");
    printf("\ninsertion of elements::--");
    insert(13);
    insert(2); //insering
    insert(23);
    insert(90);
    insert(14);
    for(int i=0;i<MAX;i++)
    {
       printf("\nfirst queue[%d]-->%d",i,queue[i]);
    }
    printf("\ndelection of first element::--");
    delete();
    delete();  //deleting
    printf("\ninsertion of elements in empty memeory locations in queue::--");
    insert(12);
    insert(13);
    printf("\nafter insertion in circular queue::--");
    print();//printing
    return 0;
}
