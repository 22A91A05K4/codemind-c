#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a=a%2;
    if(a!=0)
    {
        printf("weird");
    }
    else if(a=0 && 2<a<5)
    {
        printf("not weird");
    }
    else if(a=0 && 6<a<20)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}