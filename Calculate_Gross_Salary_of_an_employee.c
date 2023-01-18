#include<stdio.h>
int main()
{
    float basic,hra,da,pf,gross;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=basic*0.12;
    gross=basic+hra+da+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",gross);
}