#include<stdio.h>
void main(){
    int a,b,n=4;
    for(a=0; a<n; a++){
           for(b=0; b<n+a; b++){
               if(b<n-a-1)
                   printf(" ");
               else
                    printf(".");
               }
        printf("\n");    
    }    
        
}
