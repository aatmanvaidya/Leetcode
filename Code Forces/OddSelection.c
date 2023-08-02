#include<stdio.h>
int main(){
int t,i;
scanf("%d",&t);
while(t--){
int n,x;
scanf("%d %d",&n,&x);
int a[n],i,cnt=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2)
cnt++;
}
if(cnt>=1 && !(x==n && cnt%2==0) && !(cnt==n && x%2==0))
printf("YES\n");
else
printf("NO\n");
}
return 0;
}