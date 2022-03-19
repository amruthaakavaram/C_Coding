#include<stdio.h>
void main(){
    int i,j,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10],sum;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the elements of matrix A:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of matrix B:");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements of matrix B:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                sum=0;
                sum=sum+a[i][j]+b[i][j];
                c[i][j]=sum;
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Enter valid matrix");
    }
}