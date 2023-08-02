#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int k=0;k<t;k++){
int n,k,sum;
sum=0;
int T[n],D[n];
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
scanf("%d %d",&T[i],&D[i]);
}
for(int j=0;j<n;j++){
sum=sum+(T[j]*D[j]);
}
printf("%d\n",sum-k);
}
return 0;
}