#include<stdio.h>
void main()
{
    printf("addition of 5 &3 : %d", 5+3);
    //printf("%c",'A'+5);
    printf("%c\n",'A'+5);
    //printing octal 
    printf("%o\n",10);
    //hexa 
    printf("%x\n",255);
    //hexa in caps
    printf("%X\n",255);
    // 5 space alloted earlier space remain blank at first then the printing 
    printf("%5d\n",42);
    // 5 space allote earlier spaces contains 0 at first then the printing 
    printf("%05d\n",42);
    //printing plus
    printf("%+d\n",42);
    //another
    printf("%6d\n",-42);
    // format \r
    printf("hello\rhi\n");
    // checking the stack concept of printf
    int a=1, b=2;
    printf("%d%d\n",(a=3,b=4),a);
    int x=(1,2,3);
    printf("%d\n",x);
    printf("%d%d%d\n", x, ++x,x++);
    a=printf("welcome\n");
    printf("%i\n",a);
    // printing something without SEMICOLON
    if(!printf("hi"))
    {
        printf("something");
    }
    while(!printf("JOY"))
    {
        printf("SUNIPA");
    }
}