#include<stdio.h>
#include<stdlib.h>

int main ()
{
  FILE *fp;
  char *name = NULL,c,ch;
  int count;
name = malloc (20* sizeof *name);
if (!name) {
    fputs ("error: name allocation failed, exiting.", stderr);
    exit (EXIT_FAILURE);
}
printf("enter the filename:");
scanf("%s",name);
fp=fopen(name,"r");
while(1)
{
  ch= fgetc(fp);
  if(ch==EOF)
  break;
  printf("%c",ch);
}
for(c=getc(fp);c!=EOF;c=getc(fp)){
count=count+1;
}
printf("total charactewrs :%d",count);
fclose(fp);
free (name);
return(0);
}
