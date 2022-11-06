#include<stdio.h>
#include<string.h>
void main()
{
  char str1[122];
  char str2[122];
  printf("enter str1:");
  fgets(str1,122,stdin);
  printf("enter str2:");
  fgets(str2,122,stdin);
  strcat(str1,str2);
  puts(str1);
  printf("\nlength of the string :%d\n",strlen(str1));
  puts(str2);
  printf("length of the second string :%d",strlen(str2));*/


}
