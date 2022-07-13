#include<stdio.h>
int main(){
    FILE *f1,*f2;
    char c;
    f1= fopen("hello.txt","r");
    f2=fopen("copy.txt","w");
    while(1){
        c=getc(f1);
        if(c==EOF){
            break;
        }
        else{
        fprintf(f2,"%c",c);
        }
    }
    fclose(f1);
    fclose(f2);
}