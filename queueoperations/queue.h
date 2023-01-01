void insert(int data)
{
  if(rear==MAX-1)
    printf("\nqueue isfull ");
  else
  {
    queue[++rear]=data;
   printf("\ninsert-->%d",data);
  }
}
void delete()
{
  if(rear==-1)
  {
      printf("\nqueue is empty");
    }
      else
      {
        int data;
        printf("\nremoved data :%d",queue[front]);
          queue[front]=data;
          front++;
        if(front>rear)
          front=rear=-1;
  }
}
void first()
{
  int data=queue[front];
  printf("\nfirst element:%d",data);

}
void prints()
{
  if(rear==-1)
  printf("\nstack is empty");
  else
  {
    int  i;
    for(i=front;i<=rear;i++){
  printf("\nqueue[i]=%d",queue[i]);
    }
  }
}
