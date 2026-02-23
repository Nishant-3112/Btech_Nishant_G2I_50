#include <stdio.h>

int main(){
    int n1;
    printf("Enter first number :");
    scanf("%d",&n1);

   
    if(n1%2==0){
        printf("Given number is even numbers\n");
    }
    else{
        printf("Given number is odd number");
    }
    return 0;
}