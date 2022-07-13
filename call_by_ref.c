#include<stdio.h>
void swap(int*,int*);
void main(){
    int x,y;
    
    printf("enter values of a & b");
    scanf("%d %d",&x,&y);
 
    swap(&x,&y);
     printf("values after swapping are %d %d",x,y);
}
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}