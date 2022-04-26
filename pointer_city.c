#include<stdio.h>
#include<string.h>
#include<malloc.h>
void city(int n, char* x[]);
void main(){
    int n,i,j;
    char* s[20];
    printf("enter no of strings");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter string %d",i+1);
        s[i] = (char*) malloc (20*sizeof (char));
        scanf("%s",s[i]);
    }
    city(n,s);
    printf("The city details");
    for(i=0;i<n;i++){
         printf("%d %s\n",i+1,s[i]);
    }
}
void city(int n, char* s[20]){
    int i,j;
    char t[20];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])>0){
                strcpy(t,s[j]);
                strcpy(s[j],s[i]);
                strcpy(s[i],t);
            }
        }
    }
}