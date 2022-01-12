#include<stdio.h>
int main()                           
{
    int a=10,b=20;                  //arthmetic operator
    printf("sum of a and b is:%d \n",a+b);
    
    
    int c=5,d=6;                   //relational operator
    printf("%d<=%d is %d \n",c,d,c<=d); 
    

    int e=10,f;                   //unary operators
    f=++e;
    printf("the value of e,f are:%d %d \n",e,f);
}