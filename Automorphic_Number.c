#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,rev=0,sq,temp;
    scanf("%d",&a);
    temp=a;
    sq=a*a;
    while(a)
    {
        int rem=sq%10*pow(10,b);
        rev=rev+rem;
        sq=sq/10;
        a=a/10;
        b++;
    }
    if(temp==rev)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}