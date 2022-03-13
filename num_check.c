#include<stdio.h>
void main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("POSITIVE");
    }
    else if(n<0){
        printf("NEGATIVE");
    }
    else if( n==0){
        printf("ZERO");
    }
}