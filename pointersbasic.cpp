#include<iostream>
using namespace std;

int main()
{
int a=9;
int *p;
p=new int(a);
cout<<&p;
cout<<"\n"<<*p<<endl;
delete p;
cout<<*p;
    return 0;
}
