#include<stdio.h>
int main()
{
    int a,sum=0,pro=1,i;
    scanf("%d",&a);
    while(a>0)
    {
        int rem=a%10;
        a=a/10;
        sum=sum+rem;
        pro=pro*rem;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}