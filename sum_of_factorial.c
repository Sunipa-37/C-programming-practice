#include<stdio.h>
void main()
{
    int f,j, s=0,i=1;
    for (i=1;i<=10;i++)
    {
        f=1;
        for(j=1;j<=i;j++)
            f=f*j;
        s=s+f;
    }
    printf("%d",s);
}