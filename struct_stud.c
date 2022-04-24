#include<stdio.h>
void main(){
struct student{
    char a[20],g[10];
    int rollno;
}s;

    printf("enter student name,grade");
    scanf("%s  %s",s.a,s.g);
    printf("enter rollno");
    scanf("%d",&s.rollno);
    printf("student details are\n");
    printf("name of student is %s\n",s.a);
    printf("roll no is %d\n",s.rollno);
    printf("grade is %s\n",s.g);
}