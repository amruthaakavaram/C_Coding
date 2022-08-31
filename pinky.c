#include<stdio.h>
int main(){
    int income,tax1=0,tax2=0,tax=0,total;
    scanf("%d",&income);
    if(income>=0 || income<250000){
        tax1=0;
    }
    else if(income>=250000 || income<500000){
        tax1=(income-250000)*0.05;
    }
    else if(income>=500000 || income<750000){
        tax1=(income-500000)*0.1;
    }
    else if(income>=750000 || income<1000000){
        tax1=(income-750000)*0.15;
    }
     else if(income>=1000000 || income<1250000){
        tax1=(income-1000000)*0.20;
    }
     else if(income>=1250000 || income<1500000){
        tax1=(income-1250000)*0.25;
    }
     else if(income>=1500000){
        tax1=(income-1500000)*0.3;
    }
    if(income>5000000){
        tax2=0.1*5;
    }
}