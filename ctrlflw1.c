#include<stdio.h>
int main(){
    int a=11;
    if(a--==1)
        printf("true");
    else
        printf("false");
    printf("%d",a);
    return 0;
}