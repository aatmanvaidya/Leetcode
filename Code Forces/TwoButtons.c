#include<stdio.h>
int main(){
int m,n,cnt=0;
scanf("%d %d",&n,&m);
while(m>n){
m = m%2?m+1:m/2;
cnt++;
}
printf("%d\n", cnt+n-m);
return 0; 
}