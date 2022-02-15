#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    for(i=n;i<=1;i--){
        for(j=0;j<=i;j++){
            printf("*");
        }
    }
}