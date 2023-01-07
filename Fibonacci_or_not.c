#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    
        c=a+b;
        
          if(c==n)
          {
              x++;
              break;
          }
          a=b;
          b=c;
    }
    if(x!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
  
}