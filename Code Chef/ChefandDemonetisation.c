#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
long long int s,n;
while(t--){
scanf("%lld %lld",&s,&n);
if(s%2==0 && n%2==0 && s>=1 && n>=2){
if(s==n){
printf("1\n");
}
else if(s>n){
if(s%n==0)
printf("%lld\n",s/n);
else
printf("%lld\n",(s/n)+1);
}
else if(n>s){
printf("1\n");
}
}
else if(s%2!=0 && n%2==0 && s>=1 && n>=2){
if(s>n){
printf("%lld\n",(s/n)+2);
}
else if(n>s){
if(s==1);
printf("1\n");
}
else
printf("2\n");
}
}
return 0;
}