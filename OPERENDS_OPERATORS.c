#include <stdio.h>

int main(){
    char n;
    printf("Enter operation you want = ");
    scanf("%c",&n);
    int a,b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);

    switch (n)
    {
    case '+':
       printf("given numbers are in addition and value is %d",a+b);
        break;
    case '-':
    printf("Given numbers are in subtraction and value is %d",a-b);
        break;
    case '*':
    printf("Given numbers are in multiplication and value is %d",a*b);
        break;
    case'/':
    printf("Given numbers are in division and value is %d",a/b);
        break;
    default:
        break;
    }
    return 0;
}