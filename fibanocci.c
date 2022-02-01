#include<stdio.h>
void main()
{
    unsigned long long int a=1,b=1,c,n,i;
    printf("Enter the n value to generate fibanocci series:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%2d %2d \t",a,b);
    }
    else
    {
        
        for(i=0;i<n;i++){
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
            }
        printf("the fibanocci series of %dth term is: %d",n,(c-a));
    }
}