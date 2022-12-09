#include<stdio.h>
int main()
{
    int a,rev=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}