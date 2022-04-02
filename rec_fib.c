#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("fibanoci series of %d term is %d",n,fib(n));
    return 0;
}
int fib(int n)
{
    if(n>2){
        return(fib(n-2)+fib(n-1));
    }
    else if(n==1||n==2){
        return(1);
    }
   
    
}