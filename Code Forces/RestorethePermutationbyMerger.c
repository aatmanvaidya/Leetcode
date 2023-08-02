/* 
#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,x;
int m=2*n  ;
int a[53]={0};
for(int i=0;i<m;i++){
scanf("%d",&x);
if(!a[x])
a[x]=1,printf("%d ",x);
}
printf("\n");
}
return 0;
}
*/
#include<stdio.h>
int main(){
int t,n,m,i,x;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
m=2*n;
int a[53]={0};
for(i=0;i<m;i++)
{
scanf("%d",&x);
if(!a[x]) a[x]=1,printf("%d ",x);
}
printf("\n");
}
}