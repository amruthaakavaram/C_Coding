#include<stdio.h>
int search(int a[],int n,int v);
int main(){
    int a[100],pos=-1,n,i,v;
    int r_val;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&v);
    r_val=search(a,n,v);
    if(r_val==-1){
    printf("element not found ");
    }
    else{
        printf("element found at %d",r_val);
    }
    return 0;
}
int search(int a[],int n,int v){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==v){
            return i+1;
        }
    }
    return -1;
}