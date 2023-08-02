#include<stdio.h>
int main(){
long long int n,k,x,i;
scanf("%lld",&n);
for(i=0;i<n;i++){
scanf("%lld %lld",&k,&x);
printf("%lld\n",(k-1)*9+x);
}
return 0;
}