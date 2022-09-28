#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
}*root;
struct node *create();
void preorder(struct node*);
void inorder(struct node*);
void postorder(struct node*);
void main(){
    root=create();
    printf("PRE-ORDER:");
    preorder(root);
    printf("IN-ORDER");
    inorder(root);
    printf("POST-ORDER:");
    postorder(root);
}
struct node *create(){
    struct node *t;
    int x;
    printf("enter the data(press -1 to exit):");
    scanf("%d",&x);
    if(x==-1)
    return NULL;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    printf("enter the data for left node:");
    t->left=create();
    printf("enter data for right node:");
    t->right=create();
    return t;
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%3d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%3d",root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%3d",root->data);
    }
}