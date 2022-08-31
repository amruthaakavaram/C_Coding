#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *nxt;
}*head=NULL;
void push();
void pop();
void display();
void main(){
    int bol=1,choice;
    while(bol==1){
        printf("1.push()\n2.pop()\n3.exit\n");
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
            bol=0;
            break;
        }
    }
}
void push(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("no element can be added");
    }
    else{
        printf("enter the data:");
        scanf("%d",&ptr->val);
        if(head==NULL){
            ptr->nxt=NULL;
            head=ptr;
        }
        else{
            ptr->nxt=head;
            head=ptr;
        }
        display();
    }
}
void pop(){
    struct node *ptr;
    if(head==NULL){
        printf("UNDERFLOW");
    }
    else{
        ptr=head;
        head=head->nxt;
        free(ptr);
        display();
    }   
}
void display(){
    struct node *temp;
    temp=head;
    if(temp==NULL){
        printf("stack is empty");
    }
    else{
        while(temp!=NULL){
            printf("data=%d\n",temp->val);
            temp=temp->nxt;
        }
    }
}