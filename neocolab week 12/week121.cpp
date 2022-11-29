#include<iostream>
using namespace std;
class base
{
     public:
     virtual void ibase()
     {
          cout<<"bptr points to Base"<<endl;
          cout<<"display Base"<<endl;
          cout<<"Show Base:"<<endl;
     }
};
class derived: public base
{
     public:
     void ibase()
     {
          cout<<"bptr points to derived\nDisplays Base"<<endl;
          cout<<"Show Derived"<<endl;
     }
};
int main()
{
     base *ptr=NULL;
     base a;
     derived b;
     ptr=&a;
     ptr->ibase();
     ptr=new derived;
     ptr=&b;
     ptr->ibase();
}