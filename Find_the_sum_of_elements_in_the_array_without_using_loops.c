#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],c=0,i;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<n;i++)
    {
        c=c+a[i];
    }
    printf("%d",c);
}