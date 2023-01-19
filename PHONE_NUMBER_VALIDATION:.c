#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=log10(a)+1;
    c=a/pow(10,8);
    if(b==10 || c>=1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
}