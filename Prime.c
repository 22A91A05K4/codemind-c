#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0 && a%1==0)
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