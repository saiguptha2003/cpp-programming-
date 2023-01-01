#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
     int m,n;
     cin>>m;
     cin>>n;
     vector<int>a1;
     int a2[n];
     for(int i=0;i<m;i++)
     {
          int e;
          cin>>e;
          a1.push_back(e);
     }
     for(int i=0;i<n;i++)
     {
          cin>>a2[i];
     }
     vector<int>miss;
     int a=0;
     for(int i=0;i<m;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(a1[i]!=a2[j])
               {
                    miss.push_back(a2[j]);
                    a++;
               }
          }
     }
     if(a!=0)
     {
          for(int i=0;i<miss.size();i++)
          {
               
               a1.push_back(miss[i]);
          }

     }
     cout<<endl;
     for(int i=0;i<m+a;i++)
     {
          cout<<a1[i]<<"  ";
     }

}