#include<stdio.h>
int main()
{
    float a,i,c=0;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {

        c=c+(1/i);
    }
    printf("%0.2f",c);
}