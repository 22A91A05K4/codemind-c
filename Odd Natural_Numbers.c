#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;(i*2)-1<=a;i++)
    {
        printf("%d ",(i*2)-1);
    }
}