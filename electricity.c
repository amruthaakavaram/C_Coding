#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("enter no of units consumed:");
    scanf("%d",&units);
    if(units>0 && units<=200){
        bill=units*3.75;
        printf("total bill is %f \n",bill);
    }
    else if(units>=201 && units<=400){
        bill=units*5.45;
        printf("total bill is %f \n",bill);
    }
    return 0;

}