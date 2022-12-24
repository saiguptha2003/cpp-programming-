#include <iostream>
using namespace std;
int main()
{
     int x;
     cin >> x;
     try
     {
          if (x > 10)
          {
               cout<<"entered element is valid"<<endl;
          }
          else{
               throw(102);
          }
     }
      catch(...)
     {
          cout<<"error"<<endl;
     }
}
