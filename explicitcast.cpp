#include<iostream>
using namespace std;
int main()
{
     int a=65+32;
     char b=static_cast<char>(a);
     cout<<"after cast="<<b<<endl;
     cout<<"before cast="<<a;
}
