#include<stdio.h>
int main(){
    int a[100],i,j,n,pos,small;
    printf("enter no of elements of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        small=i;
        for(j=i+1;j<n;j++){
            if(a[small]>a[j]){
                pos=a[small];
                a[small]=a[j];
                a[j]=pos;
            }
        }
    }
    printf("ordered array is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}