#include<stdio.h>
int main()
{
    int a,rev=0;
    scanf("%d",&a);
    while(a)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
}