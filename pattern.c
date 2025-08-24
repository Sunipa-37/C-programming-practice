#include<stdio.h>
void main(){
    int i,n=5,l,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
            printf("%d",k);
        k++;
        printf("\n");
    }

}