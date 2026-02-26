#include <stdio.h>
int main(){
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if(age>=0&&age<=12){
        printf("Child");
    }
    if(age>=13&&age<=17){
    printf("Teen");
    }
    if(age>=18&&age<=60){
        printf("Adult");
    }
    if(age>=60){
        printf("Senior citizen");
    }
    return 0;
}
