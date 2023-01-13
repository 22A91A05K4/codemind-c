#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,max;
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n-1;i++)
{
     
    int j=i+1;
    if(max>a[j])
    {
        max=a[j];
    }
    
}
printf("%d",max);
}