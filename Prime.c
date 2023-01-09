#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        c=1;
        break;
    }
    if(c==1)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}