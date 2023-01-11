#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,s,a,b;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("%d
",s);
    }
}