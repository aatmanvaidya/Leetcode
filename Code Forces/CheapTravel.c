#include<stdio.h>
int main()
{
int n,m,a,b,i,c,d;
scanf("%d%d%d%d",&n,&m,&a,&b);
if(m*a>b)
{
c=n/m;
d=n-(m*c);
if(b>d*a)
printf("%d",c*b+d*a);
else printf("%d",(c+1)*b);
}
else printf("%d",n*a);
}
