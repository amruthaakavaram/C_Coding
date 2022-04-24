#include<stdio.h>
int main(){
    int t,m,n,cost[1000],i,j,a,b;
    scanf("%d",&t);
    
    while(t!=0)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&cost[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(m==cost[i]+cost[j])
                {
                   a=i;
                   b=j; 
                }
            }
        }
        printf("%d %d\n",a,b);
        t=t-1;
    }
    return 0;
    
}