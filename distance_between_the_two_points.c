#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,e;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    e=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%0.4f",e);   
}