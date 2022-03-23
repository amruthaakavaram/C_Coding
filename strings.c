#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char a[10],b[10];
    int ch, len;
    printf("enter str1:");
    scanf("%s",a);
    printf("enter str2:");
    scanf("%s",b);
    while(1)
    {
        printf("choose ur option \n");
        printf("1.length\n 2.compare\n3.copy\n4.concat\n5.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: len=strlen(a);
            printf("length of 1st string is %d\n",len);
            break;
            case 2: if(strcmp(a,b)==0){
                printf("both strings are equal\n");
            }
            else 
            if(strcmp(a,b)>0){
                printf("%s is greater than %s\n",a,b);
            }
            else
                printf("%s is greater than %s\n",b,a);
            
            break;
            case 3:strcpy(a,b);
            printf("%s\n",a);
            printf("%s\n",b);
            break;
            case 4:strcat(a,b);
            printf("%s\n",a);
            break;
            case 5:
            exit(1);
        }
    }
}