#include<stdio.h>
int main (void)
{
int k,n,w,d,a;
scanf("%d%d%d",&k,&n,&w);
a=w*(w+1)*k*0.5;
d=a-n;
if(d>=0)
printf("%d",d);
else
printf("0");
}