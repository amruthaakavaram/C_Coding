#include<stdio.h>
int find(int n);
void main(){
    int n,f,t;
    printf("enter a number");
    scanf("%d",&n);
    f=find(n);
  
}
int find(int n){
    int t=-1;
    if(n%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
}