using namespace std;
void inputdata(int n, int arr[100])
{
     int count;
     cout<<"enter the n value:"<<endl;
     cin>>count;
     n=count;
     cout<<"enter the elements:"<<endl;
     for(int i=0;i<n;i++)
     {
          cin>>arr[i];
     }
}
void printlist(int count, int arr[100]){
     cout<<"elements in the list:"<<endl;
     for(int i=0;i<count;i++)
     {
          cout<<arr[i]<<endl;
     }
}