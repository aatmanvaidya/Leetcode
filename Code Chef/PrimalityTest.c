#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
long long int n;
int cnt=0;
scanf("%lld",&n);
for(int j=1;j<=n;j++){
if(n%j==0)
cnt++;
}
if(cnt==2)
printf("yes\n");
else
printf("no\n");
}
return 0;
}