#include<stdio.h>
int main(){
int n,i,t=0,a;
long long int f;
scanf("%d",&t);
for(a=0;a<t;a++){
f=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
f=f*i;
}
printf("%lld\n",f);
}
return 0;
}
