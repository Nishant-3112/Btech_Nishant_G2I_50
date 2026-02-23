#include <stdio.h>

int main(){
    int n;
    printf("Enter numbers upto you want to sum = ");
    scanf("%d",&n);
     
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of all numbers is = %d",sum);

    return 0;
}