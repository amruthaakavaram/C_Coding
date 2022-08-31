#include<stdio.h>
#include<stdlib.h>
void create(int n);
void insert1();
void delete1();
void insert2();
void delete2();
void display();
struct node{
    int d;
    struct node *nxt;
}*head=NULL;
int main(){
    int n,c;
    scanf("%d",&n);
    create(n);
    scanf("%d",&c);
    switch(c){
        case 1:
        insert1();
        case 2:
        insert2();
        case 3:
        delete1();
        case 4:
        delete2();
    }
    display();
    return 0;
}
void create(int n){
    int i;
    struct node *f,*l;
    f=(struct node*)malloc(sizeof(struct node*));
    for(i=0;i<n;i++){
        scanf("%d",&f->d);
        f->nxt=NULL;
        if(head==NULL){
            head=f;
        }
        else{
            l->nxt=f;
        }
        l=f;
    }
}
void insert1(){
    struct node *x;
    x=(struct node*)malloc(sizeof(struct node*));
    scanf("%d",&x->d);
    x->nxt=head;
    head=x;
}
void insert2(){
    struct node *x,*t;
    x=(struct node *)malloc(sizeof(struct node*));
    scanf("%d",&x->d);
    t=head;
    while(t!=NULL){
        t=t->nxt;
    }
    t->nxt=x;
    x->nxt=NULL;
}
void delete1(){
    struct node *t;
    t=head;
    head=head->nxt;
    free(t);
}
void delete2(){
    struct node *x,*y;
    while(x!=NULL){
        y=x;
        x=x->nxt;
    }
    y->nxt=NULL;
    free(x);
}
void disply(){
    struct node *dis;
    while(dis!=NULL){
        printf("%d",dis->d);
        dis=dis->nxt;
    }
}