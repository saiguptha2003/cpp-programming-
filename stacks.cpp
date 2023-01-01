#include<iostream>
using namespace std;
template <typename T>class stacks
{

     int SIZE;
     int top=-1;
     T data;
     T* array;
     int count=0;
     public:
     stacks(int n)
     {
          SIZE=n;
     }
     bool isfull()
     {
          if(top==SIZE-1)
          {
               return 1;
          }
          else{
               return 0;
          }
     }
     bool isempty()
     {
          if(top==-1)
          {
               return 1;

          }
          else{
               return 0;
          }
     }
     void push(T data)
     {
          if(isfull()==1)
          {
               cout<<"stack is full"<<endl;
               return;
          }
          else
          {
               array[++top]=data;
               count++;
               return;
          }
     }
     void pop()
     {
          if(isempty()==1)
          {
               cout<<"stack is empty"<<endl;
               return;
          }   
          else{
               array[--top];
               count--;
               return;
          }      
     }
     void peek()
     {
          if(isempty()==1)
          {
               cout<<"stack is empty"<<endl;
               return;
          }
          else{
               cout<<"top element in stack :"<<array[top]<<endl;
          }
     }
     void display()
     {
          if(isempty()==1)
          {
               cout<<"stack is empty"<<endl;
               return;
          }
          else{
               for(int i=0;i<count;i++)
               {
                    cout<<"array["<<i<<"]="<<array[i]<<endl;
               }

          }
          
     }
};
int main()
{
     stacks<bool>st(9);
     st.push(0);
     st.peek();
     st.push(0);
     st.push(1);
     st.push(true);
     st.peek();
     //st.pop();
     st.peek();
     st.display();


}