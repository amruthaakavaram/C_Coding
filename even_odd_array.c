#include<stdio.h>
void main()
{
    int e=0,o=0,i,n,a[100];
    printf("Enter no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] % 2==0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }
    printf("Sum of even numbers: %d \n",e);
    printf("Sum of odd numbers is: %d",o);
}