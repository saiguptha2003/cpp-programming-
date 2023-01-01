void insert(int data)
{
  if(rear==MAX-1)
    printf("\nqueue isfull ");
  else
  {
    queue[++rear]=data;
  //  printf("\ninsert-->%d",data);
  }
}
int delete()
{
  if(rear==-1)
  {
      printf("\nqueue is empty");
    }
      else
      {
        int data;
        printf("\ndeleted data :%d",queue[front]);
          queue[front]=data;
          front++;
        if(front>rear)
          front=rear=-1;
          return data;
  }
}
void first()
{
  int data=queue[front];
  printf("\nfirst element:%d",data);

}
void prints(int arr[])
{
  if(rear==-1)
  printf("\nstack is empty");
  else
  {
    int  i;
    for(i=front;i<=rear;i++){
  printf("\nqueue[%d]=%d",i,arr[i]);
    }
  }
}
