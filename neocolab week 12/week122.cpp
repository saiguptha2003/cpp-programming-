#include <iostream>
#include<cstring>
using namespace std;
class mediaa
{
public:
     char title[100];
     float price=0;
     mediaa(char *tit,float p )
     {
          strcpy(title,tit);
          this->price=p;
     }
     virtual void output()
     {
     }

};
class books : public mediaa
{
public:
     int pages;
     books(char *n,float p,int pa):mediaa(n,p)
     {
          this->pages=pa;
     }
     void output()
     {
          cout << "...............Book." << endl;
          cout << "Title:" << title<<endl;
          cout << "Pages:" << pages<<endl;
          cout << "Price:" << price<<endl;
     }
};
class tape : public mediaa
{

float playtime=0;
public:
     tape(string n,float p,float pt):mediaa(n,p)
     {
          this->playtime=pt;
     }
     void output()
     {
          cout << "...............Tape." << endl;
          cout << "Title:" << title<<endl;
          cout << "Play Time:" << playtime << "mins" << endl;
          cout << "Price:" << price << endl;
     }
};
int main()
{
     char *s=new char[100];
     cin>>s;
     int pages;
     float price;
     cin>>price;
     cin>>pages;
     cout<<"Media Details"<<endl;
     books b1(s,price,pages);
     mediaa *ptr;
     ptr->output();
     cin>>s;
     cin>>price;
     float  playtime;
     cin>>playtime;
     tape t1(s,price,playtime);
     ptr=&t1;
     ptr->output();

}