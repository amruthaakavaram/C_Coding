#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks:");
    scanf("%d ",&m);
    if(m<40)
    {
    printf("FAIL");
    }
    else if(m>=41 && m<50)
    {
    printf("C GRADE");
    }
    else if(m>=51 && m<60)
    {
    printf("B GRADE");
    }
    else if(m>=61 && m<75)
    {
    printf("A GRADE");
    }
    else if(m>=75)
    {
    printf("DISTINCTION");
    }
    else{
    printf("ENTER VALID MARKS");
    }
    return 0;
}