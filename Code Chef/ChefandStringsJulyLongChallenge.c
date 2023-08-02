#include<stdio.h>
#include<math.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n;
scanf("%d",&n);
int a[n],sum=0;
for(int i=0;i<n-1;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
sum=sum+abs(a[i]-a[i+1]);
}
printf("%d",sum-n);
}
return 0;
}