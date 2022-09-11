#include<stdio.h>
void insert(int n);
void delete();
void show();
int queue[5],n;
int front=-1,rear=-1;
void main(){
    int choice=0;
    while(choice!=3){
    printf("1.insert\n2.delete\n3.exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        insert(n);
        break;
        case 2:
        delete(n);
        break;
        case 3:
        break;
    }
    }
}
void insert(int n){
    if(rear==4){
        printf("OVERFLOW");
    }
    else{
        printf("enter the data:");
        scanf("%d",&n);
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
            queue[rear]=n;
        }
        else{
            rear=rear+1;
            queue[rear]=n;
        }
    }
    show();
}
void delete(){
    if(front==-1 && rear==-1){
        printf("stack is empty");
    }
    else{
        int val=queue[front];
        front=front+1;
        show();
    }
}
void show(){
    for(int i=front;i<=rear;i++){
        printf("data=%d\n",queue[i]);
    }
}