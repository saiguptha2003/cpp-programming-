#include <iostream>
using namespace std;
class student
{
     int roll;

public:
     void input()
     {
          cin >> roll;
     }
     void display()
     {
          cout<<"Roll No:"<<roll<<endl;
     }
};
class marks:public student
{
     int m1;
     int m2;
     public:
     void inputm()
     {
          cin>>m1;
          cin>>m2;
     }
     void displaym()
     {
          cout<<"Marks obtained"<<endl;
          cout<<"part1 ="<<m1<<endl;
          cout<<"part2 ="<<m2<<endl;
     }

};
class sports
{
     public:
     int score;
     void inputs()
     {
          cin>>score;
     }
     void outputs()
     {
          cout<<"Sports wt:"<<score<<endl;
     }
};
class result : public marks, public sports
{
     public:
     void displayr()
     {
          display();
          displaym();
          outputs();
     }
};
int main()
{
     result s1;
     s1.input();
     s1.inputm();
     s1.inputs();
     s1.displayr();
     
}