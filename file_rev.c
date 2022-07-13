#include<stdio.h>
void main(){
    FILE *f1,*f2;
    char c;
    int i=0;
    f1=fopen("don.txt","r");
    //f2=fopen("help.txt","w");
    while(1){
        fseek(f1,i,2);
        c=fgetc(f1);
        i=i-1;
        if(ftell(f1)==0){
            break;
        }
        else{
            putch(c);
        }
    }
    fclose(f1);
    //fclose(f2);
}