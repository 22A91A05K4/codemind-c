#include<stdio.h>
int main()
{
    int a,sq,rev=0,rem;
    scanf("%d",&a);
    sq=a*a;
    while(sq>0)
    {
         rem=sq%10;
        rev=rev+rem;
        sq=sq/10;
    }
    if(rev == a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}