#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d=0,e,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=c+pow(i,2);
        d=d+i;
        
    }
    d=pow(d,2);
    e=d-c;
    printf("%d",e);
}