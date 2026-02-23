#include <stdio.h>
#include<math.h>

int main(){
    float principal,rate, time;
    printf("Enter amount of principal = ");
    scanf("%f",&principal);

    printf("Enter rate of interest = ");
    scanf("%f",&rate);

    printf("Enter time  = ");
    scanf("%f",&time);

    int Simple_Interest;
    Simple_Interest=(principal*rate*time)/100;
    printf("%d\n",Simple_Interest);

    float Compound_interest,amount;
    amount=principal*pow((1+rate/100),time);
    Compound_interest=amount - principal;
    printf("%f",Compound_interest);
    return 0;
}