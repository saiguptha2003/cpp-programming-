#include<stdio.h>
#include <math.h>
int main () {
    int n, a,cube;
    printf("enter the value of n=");
    scanf("%d", &n);
    for (a = 1; a <= n; ++a) {
        printf("value of a%d=%d\n",a ,a);
        cube = a * a * a;
        printf("cube of %d=%d\n", a, cube);
    }
        return(0);
    }

