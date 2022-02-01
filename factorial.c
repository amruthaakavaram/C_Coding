#include<stdio.h>
int main(){
    long int a,n,f=1;
    printf("enter a positive no:");
    scanf("%d",&n);
    for(a=n; a>=1; a--){
        f=f*a;
    }
    printf("factorial of %d numbers is: %d",n,f);
    return 0;
}
