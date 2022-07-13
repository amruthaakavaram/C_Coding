#include<stdio.h>
int main(){
    char ch,s[20],sen[100];
    scanf("%c %s %[^\n]s",&ch,s,sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
}