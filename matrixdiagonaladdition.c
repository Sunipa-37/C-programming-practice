#include<stdio.h>
void main(){
    int i,j,a[3][3],c=0;
    printf("enter 9 elements of the matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            if(i==j)
                c+=a[i][j];
        }
    }
    printf("addition of diagonal elements of matrix  is: %d",c);
}