/*Autor: pandurangasai guptha
  psition :btechcse core 1st year*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int ch;
  FILE *fp;
  fp=fopen("E:\\dma practice\\dmadeclaration.c","r");
  if(fp==NULL)
  {
    printf("file is empty");

  }
  while(1)
  {
    ch=  fgetc(fp);
    if(ch==EOF)
    break;
    printf("%c",ch);
  }
  printf("file name:%s",__FILE__);
  printf("\nfile modified:%s",__DATE__);
  fclose(fp);
}
