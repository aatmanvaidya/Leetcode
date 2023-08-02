#include<stdio.h>
int i,j,n,a,c[101];
int main(){
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a);
c[a]++;
}
for(i=0;i<101;i++)
while(c[i]--)
printf("%d ",i);
}