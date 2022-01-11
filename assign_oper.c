#include<stdio.h>
int main()
{
    int a=5,c;
    c=a;
    printf("c= %d \n", c);
    c += a;
    printf("c+=a => %d \n", c);
    c -= a;
    printf("c-=a => %d \n", c);
    c *= a;
    printf("c*=a => %d \n", c);
    c /= a;
    printf("c/=a => %d \n", c);
    c %= a;
    printf("c mod=a => %d \n",c);
    return 0;
}