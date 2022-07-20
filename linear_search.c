#include<stdio.h>
int main(){
int a[100],s,i,n,pos=-1;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&s);
for(i=0;i<n;i++){
    if(a[i]==s){
        pos=i+1;
    }
    else{
        continue;
    }
    
}
if(pos>0){
    printf("element found at %d",pos);
}
else{
        printf("element not found");
        }
}