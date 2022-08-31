#include <stdio.h>
int main(){
    long  int n,d,a[100000],b[10000],temp;
    int i;
    scanf("%ld %ld",&n,&d);
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    int t=n-1;
    for(i=0;i<d;i++){
        temp=a[i];
        a[i]=a[i+1];
        a[t]=temp;
        t--;
        printf("%ld\t",a[i]);
    }

    for(i=0;i<n;i++){
        printf("%ld\t",b[i]);
    }
}