#include <iostream>
using namespace std;
int main()
{
     int f = 90;
     try
     {
          if (f < 1000)
          {
               throw runtime_error("304");
          }
          else
          {
               throw runtime_error("exectfdsfion");
          }
     }
     catch(exception &a)
     {
          cout<<a.what()<<endl;
     }
}
