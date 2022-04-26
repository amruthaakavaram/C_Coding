#include<stdio.h>
void main(){
    struct student{
        int rollno;
        char name[50],grade[10];
    }s;
    printf("enter name, rollno, grade of a student");
    scanf("%s %d %s",s.name,&s.rollno,s.grade);
    printf("name:%s\n",s.name);
    printf("rollno:%d\n",s.rollno);
    printf("grade: %s",s.grade);
}