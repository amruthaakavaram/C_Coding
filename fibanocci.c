#include<stdio.h>
void main()
{
    int a=1,b=1,c,n,i;
    printf("Enter the n value to generate fibanocci series:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\t",a);
    }
    else
    {
        
        for(i=0;i<n;i++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        
    }
}