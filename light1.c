#include<stdio.h>
int fact();
void main()
{
    int n,f;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("the factorial of %d is %d\n",n,f);

}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return(f);
}