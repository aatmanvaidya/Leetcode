/*
#include<stdio.h>
int main(){
int n,k,m;
int a[n];
int cnt;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
m==a[k-1];
cnt=0;
for(int j=0;j<n;j++){
if(a[j]>=m)
cnt++;
else
continue ; 
}
printf("%d",cnt);
return 0;
}
*/

#include<stdio.h>
int main()
{
int n,k,c=0;
scanf("%d%d",&n,&k);
int a[150],x;
for(x=1;x<=n;x++)
scanf("%d",&a[x]);
for(x=1;x<=n;x++)
{
if(a[k]<=a[x] &&a[x]>0)
c++;
}
printf("%d",c);
return 0;
}