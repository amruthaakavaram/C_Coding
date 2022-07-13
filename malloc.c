#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    int *p;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory is not allocated");
    }
    else{
        for (i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        for(i=0;i<n;i++){
            printf("%d\t",p[i]);
        }
    }
}