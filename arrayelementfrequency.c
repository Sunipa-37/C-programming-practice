#include<stdio.h>
void main(){
    int j,i, a[10],c,flag,k,js;
    printf("ENTER 10 INTEGERS: ");
    for(i =0;i<10;i++)
        scanf("%d",&a[i]);
    for(i =0;i<10;i++){
        c=a[i];
        js=0;
        for(j=i;j>=0;j--){
            if(c==a[j])
                js++;
        }
        if(js==1){
            flag=0;
        for(j =0;j<10;j++){
            if(c == a[j])
                flag++;
        }
        printf("FREQUENCY OF %d is %d\n",a[i],flag);
    }
    }
}