#include<stdio.h>
void main(){
    int n;
    int *p1;
    p1=&n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%u\n",p1+=4);
    printf(" %u\n",p1-=4);
}