#include<stdio.h>
int main(){
int n,a[n],cnt=0;
scanf("%d",&n);
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
}
for(int i=0;i<n;i++){
if(a[i]<=a[i+1])
cnt++;
else
continue;
}
printf("%d",cnt+1);
return 0;
}