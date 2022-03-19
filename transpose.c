#include<stdio.h>
void main(){
    int m,n,i,j,a[10][10],b[10][10];
    printf("Enter no of rows & columns:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}