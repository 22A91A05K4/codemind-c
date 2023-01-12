#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d",d=b+c);
    }
     else if(b<a && b<c)
     {
         printf("%d",d=a+c);
     }
     else if(c<a && c<b)
     {
         printf("%d",d=a+b);
     }
}