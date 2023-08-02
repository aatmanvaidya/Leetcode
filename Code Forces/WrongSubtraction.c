#include<stdio.h>
int main(){
int k,i,n;
scanf("%d %d",&n,&k);
for(i=0;i<k;i++){
n=n%10?n-1:n/10;
}
printf("%d",n);
return 0;
}
 