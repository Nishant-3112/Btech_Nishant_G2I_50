#include <stdio.h>

int main(){
    int n1;
    printf("Enter first number :");
    scanf("%d",&n1);

    int n2;
    printf("Enter second number :");
    scanf("%d",&n2);

    int n3;
    printf("Enter third number :");
    scanf("%d",&n3);

    if(n1>n2){
        if(n1>n3){
            printf("Number first is greater \n");
        }
        else{
            printf("Number third is greater\n");
        }
    }
    else if(n2>n3){
        printf("Number second is greater\n");
    }
    else{
        printf("Number third is greater");
    }
    return 0;
}