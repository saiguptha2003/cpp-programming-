#include<iostream>
#include<string>
using namespace std;
int main()
{
     string s1;
     int repeat=0;
     char ra[10];
     int a=0;
     getline(cin,s1);
     int l=s1.length();
     int i=0;
     int r[10];
     while(s1[i]!='\0')
     {
          repeat=0;
          for(int j=0;j<s1.size();j++)
          {
               if(s1[i]==s1[j])
               {
                    repeat++;
               }
          }
          ra[a]=s[i];
          r[a]=repeat;
          i=i+repeat;
     }
}