#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d,root1,root2;
    printf("enter the values of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    d = (b*b)- (4*a*c);
    if(d==0){
        root1 = -b/(2*a);
        root2 = root1;
        printf("roots of the equation are %d %d \n",root1,root2);
    }
    else if(d>0){
        root1 = (-b+sqrt(d))/2*a;
        root2 = (-b-sqrt(d))/2*a;
        printf("roots of the equation are %d %d \n",root1,root2);
    }
    else {
        printf("roots are imaginary");
    }
    return 0;
}