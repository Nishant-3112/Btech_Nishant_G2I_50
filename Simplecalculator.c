#include <stdio.h>
int main()
{
    char operator;
    printf("Enter operator you want");
    scanf("%c",&operator);

    float o1,o2;
    printf("Enter operands ");
    scanf("%f%f",&o1,&o2);
    switch (operator)
    {
    case '+':
        printf("addition = %f\n",o1+o2);
        break;

    case '-':
    printf("subtraction = %f\n",o1-o2);
    break;

    case '*':
    printf("multiplication = %f\n",o1*o2);
    break;

    case '/':
    if(o2!=0){
        printf("division = %f\n",o1/o2);
    }else{
        printf("error");
    }
        break;
    default:
    printf("error invalid operator");
        break;
    }
    return 0;
}