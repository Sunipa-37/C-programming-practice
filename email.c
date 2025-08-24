#include<stdio.h>
#include<string.h>
void main(){
    char email[30], password[8];
    printf("enter your email address:");
    gets(email);
    printf("enter email password :");
    gets(password);
    if(strlen(password)<=3)
        printf("your password atleast have 4 character.");
    else
        printf("hello, ") && puts(email);
}