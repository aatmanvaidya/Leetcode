#include<stdio.h>
int main(){
int a[32],b[32],n,cnt;
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d %d",&a[i],&b[i]);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cnt+=a[i]==b[j];
printf("%d\n",cnt);
}