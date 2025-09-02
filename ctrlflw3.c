#include<stdio.h>
void main(){
    int i;
    for(i=0;i<=5;i++){
        if (i<3)
            continue;
        printf("%d",i);
        if(i==4)
            break;
    }
}