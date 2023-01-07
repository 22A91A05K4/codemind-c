#include<stdio.h>
int main()
{
    int a,i,rev=0,sq1,sq,r=0;
    scanf("%d",&a);
    sq1=a*a;
    while(a>0)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    sq=rev*rev;
    while(sq>0)
    {
        int rem=sq%10;
        r=r*10+rem;
        sq=sq/10;
    }
    
    if(sq1==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}