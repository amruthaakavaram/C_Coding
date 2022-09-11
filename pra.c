#include<stdio.h>
#include<ctype.h>
char stack[100];
int top=-1;
char pop();
void push(char x);
int priority(char x);

char pop(){
    return stack[top--];
}

void push(char x){
    stack[++top]=x;
}

int priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='/'){
        return 2;
    }

}
void main(){
    char exp[10];
    char *e,x;
    printf("enter the expression");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }
        else{
            while((priority(stack[top]))>=(priority(*e))){
                printf("%c",pop());
            }
            push(*e);
        }
    }
    while(top!=-1){
        printf("%c",pop());
    }
}