#include<stdio.h>
void main()
{
    int l,i,n,a[100],s;
    printf("Enter no of elements in array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("The largest number is: %d\n",l);
    for(i=0;i<n;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
    }
    printf("The smallest number is: %d",s);
}