#include<stdio.h>
int main()
{
    float basic,gross;
    scanf("%f",&basic);
    if(basic<=10000)
    {
        printf("%0.2f",gross=basic+basic*0.8+basic*0.2);
    }
    else if(basic<=20000)
    {
        printf("%0.2f",gross=basic+basic*0.9+basic*0.25);
    }
    else
    {
        printf("%0.2f",gross=basic+basic*0.95+basic*0.3);
    }
}