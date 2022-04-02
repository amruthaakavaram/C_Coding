#include<stdio.h>
int fac(int f);
int main(){
    int f;
    printf("enter a number");
    scanf("%d",&f);
    printf("factorial of number is %d",fac(f));
    return 0;
}
int fac(int f){
    if(f>=1){
        return(f*fac(f-1));
    }
    else{
        return(1);
    }
}