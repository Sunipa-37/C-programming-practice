#include<stdio.h>
void main(){
    float a, b, c, ave;
    printf("enter 3 floating numbers:");
    scanf("%f%f%f",&a , &b,&c);
    ave = (a+b+c)/3;
    printf("average of this 3 numbers is: %.2f",ave);

}