#include<stdio.h>
#include<math.h>
int main()
{
    int a,h,rev=0,temp;
    scanf("%d",&a);
    temp=a;
    h=log10(a)+1;
    while(a>0)
    {
        int rem=a%10;
        rev=rev+pow(rem,h);
        a=a/10;
        h--;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
 
}