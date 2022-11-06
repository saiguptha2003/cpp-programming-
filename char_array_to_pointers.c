/*#include<stdio.h>
void main()
{
  char *arr[3]={
    "pandu",
    "iamasuper",
    "good"};
  //int *ptr[3];
  int i=0;
  for(i=0;i<;i++)
  {
    printf("\nvalue of names in array arr[i]=%s",i,*arr[i]);
  //  printf("\naddress of array elements in array arr[i]=%d",i,&arr[i]);
  }
}*/
#include <stdio.h>

const int MAX = 4;

int main () {

   char *names[] = {
      "Zara Ali",
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   int i = 0;

   for ( i = 0; i < MAX; i++) {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }

   return 0;
}
