#include<stdio.h>
int main(){
    int n , a=0,b=1,c=0,x;
    printf("enter n");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        a=b;
        b=c;
        c=a+b;
        n--;
    }
    printf("%d\t",c);
    printf("%d\t",b);
    while(x>1)
    {
        a=c-b;
        printf("%d\t",a);
        c=b;
        b=a;
        x--;
    }

}