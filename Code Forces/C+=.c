#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
long long int a,b,n;
int cnt=0;
scanf("%lld %lld %lld",&a,&b,&n);
while((a<=n)&&(b<=n))
{
if(a>b)
  b=(a+b);
else
  a=(a+b);
cnt++;
}
printf("%d\n",cnt);
}
return 0; 
}