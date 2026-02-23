#include <stdio.h>

int main(){
    int n;
    printf("Enter numbers upto you want to sum = ");
    scanf("%d",&n);
     
    int sumEVEN=0,sumODD=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sumEVEN+=i;
        }else{
            sumODD+=i;
        }
    }
    printf("sum of all even numbers from given number is %d\n",sumEVEN);
    printf("sum of all odd numbers from given number is %d\n",sumODD);

    return 0;
}