#include<stdio.h>
#include<string.h>
void main()
{
    char a[10][10],temp[50];
    int i,j,n;
    printf("enter no of words:");
    scanf("%d",&n);
    printf("enter the words:");
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("dictionary order of words is");
    for(i=0;i<n;i++){
        puts(a[i]);
    }
}