#include<stdio.h>
void main(){
    int n,rem,temp,new=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        new=new+rem*rem*rem;
        n/=10;
    }
    if(new==temp){
        printf("ARMSTRONG NUMBER");
    }
    else{
        printf("nnot armstrong");
    }
}