#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    if(a%3==2)
    {
        printf("SMALL");
    }
    else if(a%3==1)
    {
        printf("HUGE");
    }
    else if(a%3==0)
    {
        printf("NORMAL");
    }
}