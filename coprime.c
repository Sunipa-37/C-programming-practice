#include<stdio.h>
void main(){
    int i, a,flag=0,b;
    printf("ENTER  TWO NUMBERS: ");
    scanf("%d%d",&a,&b);
    for(i=1;i<a&&i<b;i++){
        if((a%i==0)&&(b%i==0)){
            flag++;
        }
    }
    if(flag>2)
        printf("not co-prime");
    else
        printf("co-prime");
}