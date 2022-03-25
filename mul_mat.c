#include<stdio.h>
void main()
{
    int i,j,a[10][10],b[10][10],c[10][10],sum,k,r1,r2,c1,c2;
    printf("enter rows & columns:");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements in matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter rows & columns:");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements in matrix:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                sum=0;
                for(k=0;k<c1;k++){
                    sum=sum+a[k][j]*b[i][k];
                    c[i][j]=sum;
                }
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("ERROR");
    }
}