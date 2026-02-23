#include <stdio.h>

int main(){
    int n1;
    printf("Enter first number :");
    scanf("%d",&n1);

    int n2;
    printf("Enter second number :");
    scanf("%d",&n2);

   if(n1==n2){
    printf("given numbers are equals\n");
   }
   else{
    printf("given numbers are not equal");
   }
    return 0;
}