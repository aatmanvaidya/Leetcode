#include<stdio.h>
#include<stdlib.h>
int main(){
long int n,x,i,a[n],sum=0,cnt=0,arr[1000000]={0},max=0;
scanf("%ld %ld",&n,&x);
for(i=0;i<n;i++){
scanf("%ld",&a[i]);
if(a[i]!=0){
sum++;
cnt++;
}
else{
arr[i]=cnt;
cnt=0;
}
}
if(sum==n)
printf("-1");
else{
for(i=0;i<n;i++){
if(arr[i]>max)
max=arr[i];
}
printf("%ld",max);
}
return 0;
}

