#include<stdio.h>
int main(){
int n,i,s[n],sum=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&s[i]);
sum=sum+s[i];
}
printf("%d",(sum/4)+1);
return 0;
}