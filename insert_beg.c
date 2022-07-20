#include<stdio.h>
#include<stdlib.h>
void insert(int num);
void create(int n);
void display();
struct node{
    int d;
    struct node *nxt;
}*head=NULL;
int main(){
    int n,num;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
    printf("enter the data you want to insert in the begining:");
    scanf("%d",&num);
    insert(num);
    display();
    return 0;
}
void create(int n){
    int i;
    struct node *f,*prev;
    for(i=0;i<n;i++){
        f=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d",i+1);
        scanf("%d",&f->d);
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
void insert(int num){
    struct node *x;
    x=(struct node*)malloc(sizeof(struct node));
    x->d=num;
    x->nxt=NULL;
    x->nxt=head;
    head=x;
}

void display(){
    struct node *dis;
    dis=head;
    while(dis!=NULL){
        printf("data=%d\n",dis->d);
        dis=dis->nxt;
    }
}