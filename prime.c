#include<stdio.h>
void main(){
int i,n,c=0;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<n;i++){
    if(n%i==0){
        c++;
    }
}
if(c>1){
    printf("not a prime");
}
else{
    printf("prime");
}
}