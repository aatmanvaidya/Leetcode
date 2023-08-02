#include<stdio.h>
int main(){
int n,p[101],q[101],cnt=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d %d",&p[i],&q[i]);
}
for(int j=0;j<n;j++){
if(q[j]-p[j]>=2)
cnt++;
else
continue;
}
printf("%d",cnt);
return 0;
}                