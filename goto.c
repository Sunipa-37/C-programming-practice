#include<stdio.h>
main(){
    int i=1;
    start:
    if(i<=100){
        printf("\t%d",i);
        i++;
        goto start;
    }
}