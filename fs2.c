#include<stdio.h>
void main()
{
    int f=1, n,i=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        f=f*i;
    printf("%d",f);// factorial
}