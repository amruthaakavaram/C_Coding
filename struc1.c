#include<stdio.h>
void main(){
struct book{
    char name[20],author[20];
    int pages;
}b;
printf("enter name  of book");
scanf("%s[^\n]",b.name);
printf("enter author of the book");
scanf("%s[^\n]",b.author);
printf("enter no of pages");
scanf("%d",&b.pages);
printf("display book details\n");
printf("name of the book is %s\n",b.name);
printf("author of the book is %s\n",b.author);
printf("no of pages of the book is %d\n",b.pages);
}