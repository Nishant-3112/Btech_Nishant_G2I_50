#include <stdio.h>

int main(){
    int n1;
    printf("Enter first number :");
    scanf("%d",&n1);

    int n2;
    printf("Enter second number :");
    scanf("%d",&n2);

    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("After swaping first number is %d\n",n1);

    printf("After swaping second number is %d\n",n2);

    return 0;
}