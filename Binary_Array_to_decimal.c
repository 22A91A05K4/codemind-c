#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m=0,v;
    scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   } 
   for(i=0;i<n;i++)
   {
       int b=n-1-i;
       v=a[i]*pow((2),b);
       m=m+v;
       
   }
   printf("%d",m);
}