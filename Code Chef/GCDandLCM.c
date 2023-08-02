#include<stdio.h>
int main(){
int t=0;
long long int a,b,lcm,gcd;
scanf("%d",&t);
for(int i=0;i<t;i++);
{
scanf("%lld %lld",&a,&b);
for(int j=1;j<=a && j<=b;++j)
{
if(a%j==0 && b%j==0){
gcd=j;
}
}
lcm=(a*b)/gcd;
printf("%lld %lld",gcd,lcm);
}
return 0;
}