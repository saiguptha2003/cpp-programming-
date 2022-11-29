// #include<iostream>
// using namespace std;
// int main()
// {
//      int data;
//      int data2;
//      cin>>data;
//      cin>>data2;
//      cout<<"An integer value is : "<<data<<endl;
//      char a=static_cast<char>(data);
//      char b=static_cast<char>(data2);
//      cout<<"String representation of an interger value : "<<data<<endl;
//      cout<<"The value of the string is : "<<data<<endl;
//      cout<<"Integer value of the string is : "<<(int)b<<endl;
// }
#include <iostream>
#include <string>
#include <sstream> // this will allow you to use stringstream in your program

using namespace std;

int main() {
    //create a stringstream object, to input/output strings
   stringstream ss; 
   
   // a variable named str, that is of string data type
   string str = "7";
   
   // a variable named num, that is of int data type
   int num;
   
   
   //extract the string from the str variable (input the string in the stream)
   ss << str;
   
   // place the converted value to the int variable
   ss >> num;
   
   //print to the consloe
   cout << num << endl; // prints the intiger value 7
}