/*2)Write a program in C to display the n terms of harmonic series and 
their sum
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("1/%d + ",i);
            sum=sum+1/(float)i;//conversion
        }
        if(i==n)
        {
            printf("1/%d ",i);
            sum=sum+1/(float)i;
        }
    }
    printf("\nSum of Series upto %d terms : %f \n",n,sum);
return(0);
}
output:-


E:\untitled4\cmake-build-debug\untitled4.exe
Input the number of terms :
5

1/1 + 1/2 + 1/3 + 1/4 + 1/5
Sum of Series upto 5 terms : 2.283334

Process finished with exit code 0


