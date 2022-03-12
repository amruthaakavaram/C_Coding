#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}