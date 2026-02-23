#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter marks of five subject :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
     
    int sum ;
    sum=m1+m2+m3+m4+m5;
    printf(" sum of all this marks is = %d\n ",sum);

    int percentage;
    percentage=sum/5;
    printf("percentage of this marks is = %d ",percentage);
    return 0;
}

