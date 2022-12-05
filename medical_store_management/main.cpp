#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include"string.h"
#define MAX 60
using namespace std;
class Medical
{
public:
     string name;
     int id;
     int quantity;
     int price;
     string expire;
     void medicineinformation()
     {
          cout << "enter the medicine name:";
          cin >> name;
          cout << "enter the id";
          cin >> quantity;
          cout << "enter the price :";
          cin >> price;
          cout << "enter the expire(dd/mm/yyyy)";
          cin >> expire;
          ofstream file;
          file.open("medicine.txt", ios::app);
          file << id << " " << name << " " << quantity <<" " << expire<< " " << price <<endl;
          file.close();
     }
     void displayrecords()
     {
          std::ifstream file; 
          string line;
          file.open("medicine.txt");
          while ( getline (file,line) )
          {
                cout << line << '\n';
          }
     }
};
class customer
{
     public:
     string name;
     char medicine_name[20];
     int quantity;
     int totalprice;
     void billtake()
     {
          cout << "enter the name of customer :";
          cin>>name;
          cout << "enter the the name of medicine :";
          cin >> medicine_name;
          cout << "enter the quantity :";
          cin >> quantity;
          totalprice = findprice(medicine_name) * quantity;
          fstream file;
          file.open("customer.txt", ios::app);
          file << name << " " << medicine_name << " " << quantity << " " << totalprice << endl;
          file.close();
     }
     void showallrecords()
     {
          ifstream file;
          file.open("customers.txt", ios::in);
          string line;
          cout <<"name" << " " <<" medicine_name"<< " " << "quantity" << " " << "totalprice" << endl;
          while ( getline (file,line) )
          {
               cout << line << '\n';
               }
     }
     void createbill()
     {
          system("cls");
          cout << "SRM MEDICAL STORE" << endl;
          cout << "bill information" << endl;
          cout << "name :" << name << endl;
          cout << "medicine name :" << medicine_name << endl;
          cout << "quantity of medicine :" << quantity << endl;
          cout << "total price" << totalprice << endl;
          system("pause");
     }
     int removeDupWord()
     {
          string price;
          char *token = strtok(medicine_name, " ");
          while (token != NULL)
          {
               price = token;
               token = strtok(NULL, " ");
          }
          int priceinint = stoi(price);
          return priceinint;
     }
     int findprice(string medicine_name)
     {
          fstream s;
          string line;
          string answer;
          s.open("medicine.txt", ios::in);
          if (s.is_open())
          {
               while (getline(s, line))
               {
                    size_t pos = line.find(medicine_name);
                    if (pos != string::npos)
                         answer = line;
                    break;
               }
          }
          return removeDupWord();
     }
};
void print()
{
     cout << "SRM Medical Store Management System" << endl;
     cout << "1.display medicine records" << endl;
     cout << "2.medicine entry " << endl;
     cout << "3.customer records" << endl;
     cout << "4.purchase medicine" << endl;
     cout<<"5. Exit"<<endl;
     int choice;
     cout << "enter the choice from above :";
     cin >> choice;
     Medical s;
     customer c;
     switch (choice)
     {
     case 1:
          system("cls");

          s.displayrecords();
          system("pause");
          break;
     case 2:
          system("cls");
          s.medicineinformation();
          system("pause");
          break;
     case 3:
          system("cls");
          c.showallrecords();
          system("pause");
          break;
     case 4:
          system("cls");
          c.billtake();
          c.createbill();
          system("pause");
          break;

     case 5:
     exit(0);
     default:
          system("cls");
          printf("enter the correct choice .................");
     }
}
int main()
{
     while(1)
     print();
}