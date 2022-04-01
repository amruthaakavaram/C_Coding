#include<stdio.h>
int search(int a[10],int temp);
void main()
{
    int i,n,temp,a[10],s;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value you want to search:");
    scanf("%d",&temp);
    s=search(a,temp);
    if(s>0){
        printf("ELEMENT FOUND");
    }
    else{
        printf("ELEMENT NOT FOUND");
    }
}
int search(int a[10],int temp)
{
    int c=-1,i;
    for(i=0;i<10;i++){
        if(a[i]==temp){
            c=i;
        }
    }
    return(c);
}