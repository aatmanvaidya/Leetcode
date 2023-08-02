#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
long long int n;
while(t--){
scanf("%lld",&n);
if(n%4==0 && n>=3)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}