#include<stdio.h>
void main(){
    int a,b,c;
    printf("ENTER THE NUMBERS: ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++){
        if((a%i==0)&&(b%i==0)){
            c=i;
        }
    }
    printf("GCD OF %d & %d IS : %d",a,b,c);
}