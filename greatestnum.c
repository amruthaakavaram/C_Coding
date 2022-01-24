#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is greatest number",a);
    else
    printf("%d is greatest number",b);
}