#include<stdio.h>
int main()
{
int c,x;
scanf("%d",&x);
if(x%5==0)
c=x/5;
else
c=x/5+1;
printf("%d",c);
return 0;
}