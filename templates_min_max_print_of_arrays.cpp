#include<iostream>
using namespace std;
template<typename r>
r max(int n,r array[])
{
     r m=0;
     for(int i=0;i<n;i++)
     {
          if(m<array[i])
          {
               m=array[i];
          }
     }
     return m;
}
template<typename r>
 r min(int n, r array[])
{
     r min='z';
     for(int i=0;i<n;i++)
     {
          if(min>array[i])
          {
               min=array[i];
          }
     }
     return min;
}
template<typename r>
void print(int n,r array[])
{
     for(int i=0;i<n;i++)
     {
          cout<<array[i]<<" ";
     }
}
int main()
{
     int n;
     cin>>n;
     char array[n];
     for(int i=0;i<n;i++)
     {
          cin>>array[i];
     }
     cout<<"max"<<endl;
     print<char>(n,array);
}
