#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,x,s=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=c+a[i];
    }
    x=c/n;
    for(i=1;i<=n;i++)
    {
        if(a[i]<=x)s++;
    }
    printf("%d",s);
}