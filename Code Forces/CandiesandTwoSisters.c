#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
long long int n;
for(int i=0;i<t;i++){
scanf("%lld",&n);
printf("%lld\n",(n-1)/2);
}
return 0;
}