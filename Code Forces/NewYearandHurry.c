#include<stdio.h>
int main(){
int n,k,i,sum=0;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){
sum=sum+(i*5);
if(sum>(240-k)){
break;
}
else 
continue;
}
printf("%d",i-1);
return 0;
}