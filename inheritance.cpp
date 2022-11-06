/*
name: Panduranga Sai Guptha 
topic: opps in cpp
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class book
{
private:
  int bookid;
  string book_name;
  string author;
  int price;
public:
  void book1(int id,string bn)
  {
    bookid=id;
    book_name=bn;
  };
  void bookauthorANDp(string au,int pric)
  {
    author=au;
    price=pric;
  }
  void print(){
    cout<<"book name  :"<<book_name<<endl;
    cout<<"book id    :"<<bookid<<endl;
    cout<<"book author:"<<author<<endl;
    cout<<"book price :"<<price<<endl;
  }
};
class bill: public book {
private:
  string address;
  int balance;
public:
   void bill1(string add,int balance1)
  {
    address=add;
    balance=balance1;
  };
  void printbill()
  {
  cout<<"address of Buyer:"<<address<<endl;
  cout<<"balance amount to be payed:"<<balance<<"/-"<<endl;
  }
};
class message:public bill{
protected:
  int phone_number;
public:
  void input(){
    cout<<"enter the phone number  :"<<endl;
    cin>>phone_number;
  }
  void send_message()
  {
    print();
    printbill();
    cout<<"sent message to the phone number: "<<phone_number<<endl;

  }
};
int main()
{
  message person1;
  person1.book1(1,"C++ book for programing");
  person1.bookauthorANDp("panduranga sai",350);
  person1.bill1("3-555, greamspet, gandla street, chittoor",1000);
  person1.input();
  person1.send_message();
}
