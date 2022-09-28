#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nxt;
}*head=NULL;
int n;
void create(int n);
void display();
void insbeg();
void insend();
void insloc();
void delbeg();
void delend();
void delloc();
void create(int n){
    struct node *f,*prev;
    for(int i=0;i<n;i++){\
        f=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d",i+1);
        scanf("%d",&f->data);
        f->nxt=NULL;
        if(head==NULL){
            head=f;
        }
        else{
            prev->nxt=f;
        }
        prev=f;
    }
}
void display(){
    struct node *d;
    d=head;
    while(d!=NULL){
        printf("data= %d\n",d->data);
        d=d->nxt;
    }
}

void insbeg(){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to insert at the begining:");
    scanf("%d",&ptr->data);
    ptr->nxt=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->nxt=head;
        head=ptr;
    }
    display();
}
void insend(){
    struct node *ptr,*t;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to insert at the end:");
    scanf("%d",&ptr->data);
    ptr->nxt=NULL;
    t=head;
    while(t->nxt!=NULL){
        t=t->nxt;
    }
    t->nxt=ptr;
    display();
}
void insloc(){
    int loc,i;
    struct node *ptr,*t;
    printf("enter the location of the node");
    scanf("%d",&loc);
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to insert at the end:");
    scanf("%d",&ptr->data);
    ptr->nxt=NULL;
    t=head;
    for(i=1;i<loc-1;i++){
        t=t->nxt;
    }
    ptr->nxt=t->nxt;
    t->nxt=ptr;
    display();
}
void delbeg(){
    struct node *t;
    t=head;
    head=head->nxt;
    free(t);
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
    free(x);
    display();
}
void delloc(){
    struct node *x,*y;
    int loc;
    scanf("%d",&loc);
    x=head;
    for(int i=1;i<loc;i++){
        y=x;
        x=x->nxt;
    }
    y->nxt=x->nxt;
    free(x);
    display();
}
void main(){
    int choice;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
    display();
    while(choice!=7){
        printf("\n1.insert at begining\n2.insert at end\n3.insert at loc\n4.delete at begining\n5.delete at end\n6.delete at loc\n7.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insbeg();
            break;
            case 2:
            insend();
            break;
            case 3:
            insloc();
            break;
            case 4: delbeg();break;
            case 5: delend();break;
            case 6: delloc();break;
            case 7:break;
        }
    }
}