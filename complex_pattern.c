#include<stdio.h>
void main(){
    int i , j , n , k=1;
    printf(" enter n: \n");
    scanf("%d",&n);
    for (i=0 ; i<(n*2); i+=2){
        for(j=0; j<=i; j++){
            printf("%d \t",k);
            k= k+2;
        }
        printf("\n");
    }
}
4