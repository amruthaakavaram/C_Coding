#include<stdio.h>
void main()
{
    int p,t;
    float r,s;
    printf("enter the values of principle amount,terms in years,rate of interest:");
    scanf("%d %d %f",&p,&t,&r);
    s=(p*t*r)/100;
    printf("the simple interest is:%f",s);
}