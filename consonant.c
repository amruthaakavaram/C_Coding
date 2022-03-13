#include<stdio.h>
void main(){
    char c;
    printf("choose a character:");
    scanf("%c",&c);
    switch(c){
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    printf("VOWEL");
    break;
    default:
    printf("CONSONANT");
}
}