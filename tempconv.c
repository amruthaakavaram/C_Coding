#include<stdio.h>
void main()
{
    float f,c;
    printf(" enter the temp value in farenheat:");
    scanf("%f",&f);
    printf("the value of temp given in farenheat is: %f",f);
    c=(5/9)*f;
    printf("the value of temp in celsius is: %f ", c);
}