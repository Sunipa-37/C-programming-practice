//(x-y)*1+(x-y)*2+(x-y)*n
#include<stdio.h>
void main(){
    int s=0, x, i , y ,n;
    scanf("%d%d",&x,&y);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=(x-y)*i;
    }
    printf("%d",s);
}