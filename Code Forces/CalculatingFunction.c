/*
#include<stdio.h>
#include<math.h>
int main(){
long long int n,a,sum=0;
scanf("%lld",&n);
for(int i=1;i<=n;i++){
a=i*pow(-1,i);
sum=sum+a;
}
printf("%lld",sum);
return 0;
}

the answer was coming, but it was taking a lot of time
*/

#include<stdio.h>
int main()
{
long long n;
scanf("%lld",&n);
if(n%2==0)
printf("%lld",n/2);
else 
printf("%lld",-((n+1)/2));
}