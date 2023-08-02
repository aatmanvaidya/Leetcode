#include<stdio.h>
int main(){
int a,n,l=0,cnt=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%d",&a);
if(a>l)l=a;
if(i==l)cnt++;
}
printf("%d",cnt);
return 0;
}