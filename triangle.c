#include <stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter sides of triangle");
    scanf("%f%f%f",&s1,&s2,&s3);
    if ((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s3)){
        printf ("the sides form a triangle.\n");
    if(s2==s3||s1==s2||s1==s3)
    printf("isosceles triangle\n");
    if(s1==s2&&s2==s3)
    printf("equilateral triangle\n");
    }
    else 
    printf("scalene triangle");
    return 0;
}