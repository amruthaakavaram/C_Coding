#include<stdio.h>
int main(){
    int n, a,sum=0;
    printf("Enter a positive number:");
    scanf("%d",&n);
    for(a=1; a<=n; a++){
        sum += a;
    }
printf("sum of %d natural numbers is: %d",n,sum);
    return 0;
}