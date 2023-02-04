#include<stdio.h>
int main()
{
    FILE *f=fopen("index.html","r");
    char s;
    while((s=fgetc(f))!=EOF)
    {
        printf("%c",s);
    }
}