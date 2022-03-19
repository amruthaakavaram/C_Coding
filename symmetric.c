#include<stdio.h>
void main()
{
    int m,n,i,j,a[10][10],b[10][10],c=0;
    printf("Enter no of rows & columns:");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix:");
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=b[i][j]){
                c++;
                break;
            }
        }
        
    }
    if(c==0){
        printf("SYMMETRIC MATRIX");
    }
    else{
        printf("NOT A SYMMETERIC MATRIX");
    }
}
    