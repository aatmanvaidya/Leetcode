#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
long long int n,cnt=0;
while(t--){
scanf("%lld",&n);
cnt=0;
while(n>=1){
if(n%6==0){
n/=6;
cnt++;
}
else if(n%3==0){
n*=2;
cnt++;
}
else 
break;
}	
if(n>1)
printf("-1\n");
else
printf("%lld\n",cnt);
}
return 0;
}