#include<stdio.h>
#include<string.h>
void main()
{
  char name[600];
  char name2[500];
  printf("enter the string:");
    fgets(name,600,stdin);
  printf("enter the name2:");
  scanf("%[^\n]s",name2);
  puts(name2);
  puts(name);
printf("number of characters in string 1 :%d  %d",strlen(name),strlen(name2));
  printf("%s",name);

}
