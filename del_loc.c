#include<stdio.h>
#include<stdlib.h>
void delete();
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
    delete();
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
void delete(){
    int loc;
    printf("enter the node you want to delete:");
    scanf("%d",&loc);
    struct node *x,*y;
    x=head;
    for(int i=0;i<loc;i++){
        
            y=x;
            x=x->nxt;
    }
    y->nxt=x->nxt;
    free(x);

}

void display(){
    struct node *dis;
    dis=head;
    while(dis!=NULL){
        printf("data=%d\n",dis->d);
        dis=dis->nxt;
    }
}