#include<stdio.h>
int main(){
int i,ans=0; 
int n,k;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
int t;
scanf("%d",&t);
if(t%k==0){
ans++;
}
}
printf("%d",ans);
return 0;
}
