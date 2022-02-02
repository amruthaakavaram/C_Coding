#include<stdio.h>
void main(){
    int i,j,k;
    printf("enter three numbers:");
    scanf("%d %d %d",&i,&j,&k);
    if(i>j){
        if(i>k){
            printf("%d is big number",i);
        }
        else{
            printf("%d is big number",k);
        }
    }
    else{
        printf("%d is big number",j);
    }
}