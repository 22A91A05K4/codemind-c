#include<stdio.h>
int main()
{
    int n,c=0,r;
    scanf("%d",&n);
    while(n>0)
    {
         r=n%10;
        if(r>=c)c=r;
        n=n/10;
    }
    printf("%d",c);
}