#include <stdio.h>
int main()
{
int n1, n2;
char operator;
    printf("enter the operator (+,-,*,/,%) =");
    scanf("%char",&operator);
    printf("enter the value n1=");
    scanf("%d",&n1);
    printf("enter the value n2=");
    scanf("%d",&n2);

    switch (operator) {
        case '+':
            printf("%d+%d=%d",n1, n2, n1+n2);
            break;
        case '-':
            printf("%d-%d=%d",n1, n2, n1+n2);
            break;
        case '*':
            printf("%d*%d=%d",n1,n2,n1*n2);
            break;
        case '%':
            printf("(%d)%(%d)=%d",n1,n2,n1%n2);
            break;
        case '/':
            printf("%d/%d=%d",n1,n2,n1/n2);
            break;
        default:
            printf("error operator is not correct");
    }
    return(0);
}