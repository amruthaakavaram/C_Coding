#include<stdio.h>
int fac(int);                       //function declaration
void main()
{
    int n,f;
    printf("enter a number");
    scanf("%d",&n);
    f=fac(n);                      //funtion calling 
    printf("the factorial of %d is %d",n,f);
}
int fac(int n)                    //function definition
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}