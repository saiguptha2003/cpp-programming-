#include<iostream>
#include<vector>
#include<list>
using namespace std;
class hashtable
{
     int size;
     list<int>*array;
     
     public:
     hashtable(int s)
     {
          this->size=s;
          array=new list<int>[size];
          
     }
     
     int hashfunction(int data)
     {
          return data%size;
     }
     void insert(int data)
     {
          int index=hashfunction(data);
          array[index].push_back(data);
          return;
     }
     void deletehash(int data)
     {
          int index=hashfunction(data);
          list<int>::iterator i;
          for(i=array[index].begin();i!=array[index].end();i++)
          {
               if(*i=data)
               {
                    break;
               }
          }
          if(i!=array[index].end())
          {
               array[index].erase(i);
          }
     }
     void display()
     {
          for(int i=0;i<size;i++)
          {
               cout<<i;
               for(auto u:array[i])
               {
                    cout<<"-->"<<u<<" ";

               }
               cout<<endl;
          }
     }
};

int main()
{
     hashtable h(12);
     h.insert(12);
     h.insert(23);
     h.insert(34);
     h.insert(89);
     h.insert(78);
     h.insert(12);
     h.insert(89);
     h.deletehash(12);
     h.display();
     return 0;
}