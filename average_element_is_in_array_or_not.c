#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int x,c=0,s=0;
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
        if(x==a[i])s++;
    }
    if(s!=0)printf("True");
    else printf("False");
}