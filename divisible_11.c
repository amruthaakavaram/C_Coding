#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%11==0 && n%5==0){
        printf("The number is divisible by both 5 and 11");
    }
    else{
        printf("The number is not divisible by 5 and 11");
    }
}