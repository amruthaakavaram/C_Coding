#include<stdio.h>
void main(){
    int a[10][10],i,j,n,t;
    printf("Enter no of rows:");
    scanf("%d",&n);
   
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                a[i][j]==1;
            }
            else{
                a[i][j]==0;
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}