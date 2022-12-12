#include<stdio.h>
int main()
{
    int a[3],i,j,pro=1;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<3;i++)
    {
        pro=pro*a[i];
    }
    int c;
    c=(2*pro*512)/1024;

    printf("%dKB",c);
}