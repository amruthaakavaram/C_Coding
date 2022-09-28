#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *nxt,*prev;
}*head=NULL;
void insbeg();
void insend();
void delbeg();
void delend();
void create(n);
void display();
void insloc();
void delloc();
int n;
void create(){
    struct node *f,*u;
    for(int i=0;i<n;i++){
        f=(struct node*)malloc(sizeof(struct node));
        printf("enter the data for node %d:",i+1);
        scanf("%d",&f->d);
        f->prev=NULL;
        f->nxt=NULL;
        if(head==NULL){
            head=f;
        }
        else{
            u->nxt=f;
            f->prev=u;
        }
        u=f;
    }
    display();
}
void display(){
    struct node *dis;
    dis=head;
    while(dis!=NULL){
        printf("data= %d\n",dis->d);
        dis=dis->nxt;
    }
}
void insbeg(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to enter at the begining:");
    scanf("%d",&ptr->d);
    ptr->prev=NULL;
    ptr->nxt=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->nxt=head;
        head->prev=ptr;
        head=ptr;
    }
    display();
}
void insend(){
    struct node *ptr,*t;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to enter at the end:");
    scanf("%d",&ptr->d);
    ptr->prev=NULL;
    ptr->nxt=NULL;
    t=head;
    while(t->nxt!=NULL){
        t=t->nxt;
    }
    t->nxt=ptr;
    ptr->prev=t;
    display();
}
void delbeg(){
    struct node *x;
    x=head;
    head=head->nxt;
    free(x);
    display();
}
void delend(){
    struct node *x,*y;
    x=head;
    while(x->nxt!=NULL){
        y=x;
        x=x->nxt;
    }
    y->nxt=NULL;
    x->prev=NULL;
    free(x);
    display();
}
void main(){
    int i,choice;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
    while(choice!=6){
        printf("1.insert at beg\n2.insert at end\n3.delete at beg\n4.delete at end\n5.insert at location\n6.delete at loc\n6.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:insbeg();break;
            case 2:insend();break;
            case 3:delbeg();break;
            case 4:delend();break;
            case 5:insloc();break;
            case 6:delloc();break;
            case 7:break;
        }
    }
}
void insloc(){
    int loc;
    printf("enter the loctaion:");
    scanf("%d",&loc);
    struct node *y,*x,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&ptr->d);
    ptr->nxt=NULL;
    ptr->prev=NULL;
    x=head;
    for(int i=1;i<loc;i++){
        y=x;
        x=x->nxt;
    }
    y->nxt=ptr;
    ptr->prev=y;
    ptr->nxt=x;
    x->prev=ptr;
    display();
}
void delloc(){

}