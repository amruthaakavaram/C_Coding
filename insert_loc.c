#include<stdio.h>
#include<stdlib.h>
void insert(int num,int loc);
void create(int n);
void display();
struct node{
    int d;
    struct node *nxt;
}*head=NULL;
int main(){
    int n,num,loc;
    printf("enter no of nodes:");
    scanf("%d",&n);
    create(n);
    printf("enter the data you want to insert at the end:");
    scanf("%d",&num);
    printf("enter the location:");
    scanf("%d",&loc);
    insert(num,loc);
    display();
    return 0;
}
void create(int n){
    int i;
    struct node *f,*prev;
    for(i=0;i<n;i++){
        f=(struct node*)malloc(sizeof(struct node));
        printf("enter data for node %d:",i+1);
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
void insert(int num,int loc){
    int i;
   struct node *x;
   x=(struct node*)malloc(sizeof(struct node));
   x->d=num;
   x->nxt=NULL;
   struct node *t;
   t=head;
    for(i=0;i<loc-1;i++){

    t=t->nxt;
    if(t==NULL){
        printf("the desired node is not present");
        return;
    }
   }
   x->nxt=t->nxt;
   t->nxt=x;
}

void display(){
    struct node *dis;
    dis=head;
    while(dis!=NULL){
        printf("data=%d\n",dis->d);
        dis=dis->nxt;
    }
}