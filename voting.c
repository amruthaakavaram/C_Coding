#include<stdio.h>
int main(){
    int age;
    char id;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Do you have identity proof press (Y) or (N):");
        scanf("%c",&id);
        if (id=='Y' || id=='y'){
            printf("You are ELIGIBLE for casting your vote");
        }
        if(id== 'n' || id=='N'){
            printf("You are NOT ELIGIBLE for casting your vote");
        }
    }
        
    else{
            printf("You are NOT ELIGIBLE for casting your vote");
        }
        return 0;
}