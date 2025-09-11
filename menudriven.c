#include<stdio.h>
void evenOdd(int);
int findRev(int);
void floyedTriangle(int);
void main(){
    int c;
    printf("1. checking even odd\n2. finding reverse of a number\n3. generate a floyed triangle\nenter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 2:printf("enter a number: ");
        int n, r;
        scanf("%d",&n);
        r=findRev(n);
        printf("%d is reverse of %d",n,r);
        break;
    case 3: printf("enter thr limit:");
        int l;
        scanf("%d",&l);
        floyedTriangle(l);
        break;
    case 1: printf("enter a number: ");
        int m;
        scanf("%d",&m);
        evenOdd(m);
        break;
    default: printf("INVALID INPUT");
        break;
    }
}
void evenOdd(int n){
    if(n%2==0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
}
int findRev(int n){
    int r, rev=0;
    while(n>0){
        r=n%10;
        rev=r +(rev*10);
        n=n/10;
    }
    return rev;
}
void floyedTriangle(int n){
    int i,j,k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            k=i+j;
            if (k%2 == 0) { 
                printf("1");
            } else { 
                printf("0");
            }
        }
        printf("\n");
    }

}