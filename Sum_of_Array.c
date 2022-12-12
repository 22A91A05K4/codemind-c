#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c=c+a[i];
    
    }
    
    printf("%d",c);
}