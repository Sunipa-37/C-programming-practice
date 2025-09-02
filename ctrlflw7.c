#include<stdio.h>
void main(){
    char c;
    printf("enter the character:");
    scanf("%d",&c);
    switch (c)
    {
    case 'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':
        printf("vowel");
        break;
    
    default:
        printf("consonant");

    }
}