#include<stdio.h>
void main(){
    int n,i;
    printf("enter no of students:");
    scanf("%d",&n);
    struct student{
        int rollno;
        int name[50],grade[10];
    }s[n];
    for(i=0;i<n;i++){
        printf("enter name, roll no, grade of student %d",i+1);
        scanf("%s %d %s",s[i].name,&s[i].rollno,s[i].grade);
    }
    for(i=0;i<n;i++){
        printf("DETAILS OF STUDENT %d",i+1);
        printf("Name:%s\n",s[i].name);
        printf("Rollno:%d\n",s[i].rollno);
        printf("Grade:%s\n",s[i].grade);
    }
}