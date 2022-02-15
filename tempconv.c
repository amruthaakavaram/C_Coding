#include<stdio.h>
void main()
{
    float f,c;
    printf(" enter the temp value in farenheat:");
    scanf("%f",&f);
    printf("the value of temp given in farenheat is: %f\n",f);
    c=(f-32)*5/9;
    printf("the value of temp in celsius is:%2f",c);
}