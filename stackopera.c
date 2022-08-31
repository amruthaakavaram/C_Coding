#include<stdio.h>
int choice,top=-1,n,stack[100],i,item;
void push();
void pop();
void peek();
void show();

void main(){
    int bol=1;
    printf("enter no of elements in the stack:");
    scanf("%d",&n);
    while(bol==1){
        printf("1.push\n2.pop\n3.peek\n4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            bol=0;
            break;
            
        }
    }

}
void push(){
    if(top==n){
        printf("OVERFLOW");
    }
    else{
        top=top+1;
        printf("enter the data:");
        scanf("%d",&item);
        stack[top]=item;
        show();
    }
    
}
void pop(){
    if(top==-1){
        printf("UNDERFLOW");
    }
    else{
        top=top-1;
        show();
    }
    
}
void peek(){
    if(top==-1){
        printf("STACK IS EMPTY");
    }
    else{
        printf("top=%d",top);
    }
}
void show(){
    for(int i=top;i>=0;i--){
        printf("data=%d\n",stack[i]);
    }
}