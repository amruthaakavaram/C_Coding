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

    int g=13,h=15;                //logical operators
    printf("%d ",g&&h);
    printf("%d \n",g||h);


    int i=27,j=45;               //bitwise operators
    printf("%d ",i&j);
    printf("%d ",i|j);
    printf("%d ",i<<1);
    printf("%d \n",j>>1);

    int k=15,l;
    printf("%d ",k+=l);
    printf("%d ",k-=l);
    printf("%d ",k/=l);
    printf("%d \n",k%=l);
    return 0;
}