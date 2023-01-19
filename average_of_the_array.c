#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float x,c=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        
        c=c+a[i];
    }
    x=c/n;
    printf("%.2f",x);
}