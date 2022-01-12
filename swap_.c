#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the values of a,b:");
    scanf("%d %d",&a,&b);
    printf("a,b before swaping:%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a,b after swaping are %d %d \n",a,b);
}