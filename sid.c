#include<stdio.h>
void main(){
    int a,f=1,i;
    printf("enetr a number");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        f=f*i;
    }
    printf("factorial is %d",f);
}