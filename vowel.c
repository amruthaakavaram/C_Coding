#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("enter a charcter:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("the character %c is vowel",ch);
        break; 
        default: 
        printf("the charcter %c is consonent",ch);
        break; 
    }
    return 0;
}