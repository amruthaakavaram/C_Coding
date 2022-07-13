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
        while(t<a[j]&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    printf("ordered array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}