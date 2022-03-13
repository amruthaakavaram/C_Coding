#include<stdio.h>
void main()
{
    int i,n,a[100],f=0,s=0;
    printf("Enter no of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]>f)
    {
        s=f;
        f=a[i];    
    }
    else if(a[i]>s && a[i] != f)
    {
        s=a[i];
    }
    }
    printf("The first largest is: %d \n",f);
    printf("The second largest is: %d",s);
}