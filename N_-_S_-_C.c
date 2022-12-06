#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        int c=i*i;
        int d=c*i;
        printf("%d %d %d
",i,c,d);
    }
}