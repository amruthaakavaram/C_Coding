#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,c,len;
    printf("enter a string:");
    scanf("%s",&a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]!=a[len-i-1]){
        c=1;
        break;
        }
    }
    if(c==0){
        printf("IT'S A PALLINDROME");
    }
    else{
        printf("NOT A PALLINDROME");
    }
}