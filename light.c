#include<stdio.h>
int addition();
int main()
{
    int answer;
    answer = addition();
    printf("addition of two numbers is %d",answer);
    return 0;
}
int addition()
{
    int num1, num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    return num1+num2;
}
