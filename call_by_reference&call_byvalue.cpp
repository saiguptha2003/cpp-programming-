#include<iostream>
using namespace std;
int reference(int &a,int & b)
{
     return a+b;
}
int reference_using_pointer(int *p,int *q)
{
     return *p+*q;
}
int call_by_value(int a ,int b)
{
     return a+b;
}
int main()
{
     int a(90),b(80);
     cout<<reference(a,b)<<endl;
     cout<<reference_using_pointer(&a,&b)<<endl;
     cout<<call_by_value(a,b);
}
