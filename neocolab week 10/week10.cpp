#include<iostream>
using namespace std;
class a
{
     public:
     int intr;
     float fl;
     int i1;
     int i2;
     public:
     a()
     {
          cout<<"alpha intialized"<<endl;
     }
};
class b
{
     public:
     b()
     {
          cout<<"beta intialized"<<endl;
     }
};
class c:public b,public a
{
     public:
     c()
     {
          cout<<"gamma intialized"<<endl;
     }
     void display()
     {
          cout<<"x="<<intr<<endl;
          cout<<"y="<<fl<<endl;
          cout<<"m="<<i1<<endl;
          cout<<"n="<<i2<<endl;
     }
     void inpiut(int i,float f,int i1,int i2)
     {
          this->intr=i;
          this->fl=f;
          this->i1=i1;
          this->i2=i2;

     }

};
int main()
{
     c a1;
     int aa;
     float bb;
     int cc;
     int dd;
     cin>>aa>>bb>>cc>>dd;
     a1.inpiut(aa,bb,cc,dd);
     a1.display();

}