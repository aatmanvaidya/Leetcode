#include<stdio.h>
int main(){
long long int n,p;
scanf("%lld",&n);
if(n%2 != 0) printf("0\n");
else {
p=n/4;
if(n%4==0) p--;

printf("%lld\n",p);
}
return 0;
}