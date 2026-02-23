#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subject :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     
    int sum,percentage ;
    sum=m1+m2+m3+m4+m5;
    percentage=sum/5;
    printf("percentage of this marks is = %d \n",percentage);
   
    if(percentage<=100){
        if(percentage>=90){
            printf("Grade A");
        }
        else if(percentage>=80){
            printf("Grade B");
        }
        else if(percentage>=60){
            printf("Grade C");
        }
        else{
            printf("Grade D");
        }
    }
   
    return 0;
}

