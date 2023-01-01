/*
Autor:- V D Pandurangasai Guptha
Section:-B
Topic:-towers of hanoi
Subject:cse107(data structures)
*/
#include<stdio.h>
int count=0;
void TOH(int n,char x,char y,char z) //recuring funcion to satisfy contion
 {

   if(n>0) //contion to check number of discs is empty or not
   {
      TOH(n-1,x,z,y);//calling the function
       prinf("\n Move disk %d from rod %c to rod %c", n,x,y);//printing the changes
      printf("\n%c to %c",x,y);
      TOH(n-1,z,y,x);//recuring function
      count++;
   }
}
int main() {
   int n=0;
   printf("enter the number of disc:-");
   scanf("%d",&n);//input the num4ber discs
   TOH(n,'A','B','C');
   printf("\ncount of steps:-%d",count);
}
