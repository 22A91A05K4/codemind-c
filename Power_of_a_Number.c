#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,rem;
    scanf("%d%d%d",&a,&b,&c);
    d=pow(a,b);
    d=d%c;
    printf("%d",d);
}