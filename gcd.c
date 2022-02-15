#include<stdio.h>
void main(){
    int a,b,temp;
    printf("enter the values of a , b");
    scanf("%d %d",&a,&b);
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("GCD is%d",temp);
}