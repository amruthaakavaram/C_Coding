#include <stdio.h>

int main() {
    int a[5]={40,30,40,20,10};
    int n=5,i,temp;
    for(i=0;i<n;i++){
        int j=i-1;
        temp = a[i];
        while(temp<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}