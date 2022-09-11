#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *nxt;
}*front=NULL,*rear=NULL;
void show();
void insert(){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&ptr->d);
    if(front==NULL){
        front=ptr;
        rear=ptr;
        front->nxt=NULL;
        rear->nxt=NULL;
    }
    else{
        rear->nxt=ptr;
        rear=ptr;
        rear->nxt=NULL;
    }
    show();
}
void delete(){
    if(front==NULL){
        printf("QUEUE IS EMPTY");
    }
    else{
    struct node*t;
    t=front;
    front=front->nxt;
    free(t);
    show();
    }
}
void show(){
    struct node *dis;
    dis=front;
    while(dis!=NULL){
        printf("data=%d\n",dis->d);
        dis=dis->nxt;
    }
}
void main(){
    int choice=0;
    while(choice!=3){
        printf("1.insertion\n2.deletion\n3.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            break;
        }
    }
}