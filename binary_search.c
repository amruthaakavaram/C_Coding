#include<stdio.h>
int main(){
    int a[10],s,i,n,beg=0,mid,end,pos=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    end=n-1;
    beg=0;
    mid=(beg+end)/2;
    while(beg<=end){
        if(a[mid]==s){
            pos=mid;
            break;
        }
        else if(a[mid]>s){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    if(pos>=0){
        printf("ELEMENT FOUND");
    }
    else{
        printf("ELEMENT NOT FOUND");
    }
    return 0;
}