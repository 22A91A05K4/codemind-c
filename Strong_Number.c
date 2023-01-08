#include<stdio.h>
int main()
{
    int a,b=0,rem,t;
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
         rem=a%10;
        int p=1,i;
        for(i=1;i<=rem;i++)
    {
        p=p*i;
    }
    b=b+p;
    a=a/10;
    }
    if(t==b)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
    
}