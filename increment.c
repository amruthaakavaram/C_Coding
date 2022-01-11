#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("the value of a given is:%d",a);
    b=a++;      //b=a+1 1st assignment then excute
    printf("the values of a,b are: %d %d \n",a,b);
}