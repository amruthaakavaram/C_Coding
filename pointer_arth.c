#include<stdio.h>
void main(){
    int n;
    int *p1;
    p1=&n;
    printf("enter a number");
    scanf("%d",&n);
    printf("increament: %d\n",p1++);
    printf("decreament: %d\n",p1--);
}