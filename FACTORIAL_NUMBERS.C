#include <stdio.h>

int main(){
    int n;
    printf("Enter numbers upto you want to factorial = ");
    scanf("%d",&n);
     
    int FACT=1;
    for(int i=1;i<=n;i++){
        FACT*=i;
         printf(" Factorial of %d is = %d\n",i,FACT);
    }
   

    return 0;
}