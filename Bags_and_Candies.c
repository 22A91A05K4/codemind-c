#include<stdio.h>
int main()
{
    int n,k,m,v;
    scanf("%d%d%d",&n,&k,&m);
    v=n/(k*m);
    if(n%(k*m)==0)
    {
        printf("%d",v);
        
    }
    else
    {
        printf("%d",v+1);
    }
}