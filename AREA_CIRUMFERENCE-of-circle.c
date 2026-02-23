#include <stdio.h>

int main(){
    int radius;
    printf("Enter radius of circle = ");
    scanf("%d",&radius);
     float area;
     area=3.14*radius*radius;
     printf("%f\n",area);

     float circumference;
     circumference=2*3.14*radius;
     printf("%f",circumference);
    return 0;
}