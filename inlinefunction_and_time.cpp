#include <bits/stdc++.h>
using namespace std;
int timefunction(time_t start,time_t end)
{
    time(&start);
    ios_base::sync_with_stdio(false);
    time(&end);
    double time_taken = double(end - start);
    cout << "\nTime taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
inline int reference(int &a,int & b)
{
     return a+b;
}
inline int reference_using_pointer(int *p,int *q)
{
     return *p+*q;
}
inline int call_by_value(int a ,int b)
{
     return a+b;
}
int main()
{  
     clock_t start, end;
     start = clock();
     int a(90),b(80);
     cout<<reference(a,b)<<endl;
     cout<<reference_using_pointer(&a,&b)<<endl;
     cout<<call_by_value(a,b);
      end = clock();
      timefunction(start,end);
}
