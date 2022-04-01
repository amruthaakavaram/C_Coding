#include<stdio.h>
int fac(int n);
void main(){
    int f,a;
    printf("enter a number");
    scanf("%d",&f);
    a=fac(f);
    printf("the factorial of given number is %d",a);
}
int fac(int n){
    int f,a;
    if(f>=1){
        return(f*fac(f-1));
    }
    else{
        return(1);
    }
}