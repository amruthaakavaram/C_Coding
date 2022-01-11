#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    b=++a;         //1st excute and then assign
    printf("the values of a,b are: %d %d",a,b);
}