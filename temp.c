#include<stdio.h>
int main(){
    int a[20],i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        j=i-1;
        t=a[i];
        while(j>=0 && t<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}