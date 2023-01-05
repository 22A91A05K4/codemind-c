#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        i=(a*(a+1))/2;
        printf("%d",i);
    }
}