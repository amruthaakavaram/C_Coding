#include<stdio.h>
int main()
{
    int a,b,i, operator;
    char temp, temp1, c;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    scanf("%c",&temp);
    
    printf("1.Addition\n 2.Subtraction \n 3.Multiplication\n 4.Division\n 5.Modulus\n");
    printf("enter the operator you want to perform:");
    scanf("%d",&operator);
    scanf("%c", &temp1);
    switch(operator)
    {
    case 1 :
    i = a + b;
    printf("addition of two numbers is %d\n",i);
    break;

    case 2 :
    i = a - b;
    printf("subtraction of two numbers is %d\n",i);
    break;

    case 3 :
    i = a * b;
    printf("multiplication of two numbers is %d\n",i);
    break;

    case 4 :
    i = a / b;
    printf("division of two numbers is %d\n",i);
    break;

    case 5 :
    i = a % b;
    printf("remainder is %d\n",i);
    break;

    default:
    printf("ERROR: inavalid operator\n");
    }
    printf("Do you want continue the operation(y/Y):");
    scanf("%c",&c);
   
    return 0;
}