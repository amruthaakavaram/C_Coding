#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values of a,b:");
    scanf("%d %d",&a,&b);
    printf("values of a,b before swaping are: %d %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("values of a,b after swaping are: %d %d \n",a,b);
}