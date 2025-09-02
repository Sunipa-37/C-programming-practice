#include<stdio.h>
void main(){
    int i=1;
    start:
    if(i<=3){
        printf("%d",i);
        i++;
        goto start;
    }
}
