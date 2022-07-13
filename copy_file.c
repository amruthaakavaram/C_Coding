#include<stdio.h>
int main(){
    FILE *f1,*f2;
    char n[20];
    f1=fopen("1.c","r");
    f2=fopen("2.c","w");
    fscanf("f1","%c",n);
    fprintf("f2","%c",n);
    fclose(f1);
    fclose(f2);
}