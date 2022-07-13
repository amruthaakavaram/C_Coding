#include<stdio.h>
void swap(int a,int b);
void main(){
    int a,b;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    swap(a,b);
     

}
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("values after swapping are %d %d",a,b);
} 