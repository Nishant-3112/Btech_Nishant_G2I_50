#include <stdio.h>

int main(){
    float centigrade;
    printf("Enter temperature in Centigrade = ");
    scanf("%f",&centigrade);

    float fahrenheit;
    fahrenheit=(9*centigrade/5)+32;
    printf("%f",fahrenheit);
    return 0;
}