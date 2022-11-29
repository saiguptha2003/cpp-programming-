#include<iostream>
using namespace std;
class timewithmin
{
     public:
     int num;
     timewithmin(int num)
     {
          this->num=num;
     }
};
class timewithhrmin
{
     public:
     int hr=0;
     int min=0;
     int data;
     timewithhrmin(int min)
     {
          this->data=min;
     }
     void function(int num)
     {
          if(num<60)
          {
               cout<<"Time = "<<hr<<" hrs and "<<min<<" mins"<<endl;
               return;
          }
          else{
               hr++;
               min=num-60;
               num=min;
               function(num);
          }

     }
};
int main()
{
     int num;
     cin>>num;
     timewithhrmin t1(num);
     t1.function(num);



}