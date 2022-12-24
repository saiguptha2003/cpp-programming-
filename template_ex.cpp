#include <iostream>
using namespace std;
template <typename s>s maximum(s a,s b)
{
     if(a>b)
     {
          return a;
     }
     else{
          return b;
     }
}
int main()
{
    cout<< maximum<bool>(1,0);
}