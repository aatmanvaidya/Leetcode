#include<stdio.h>
int main(){
int n,sum,t=0,i;
double m;
scanf("%d",&t);
for(i=0;i<t;i++){
sum=0;
scanf("%d",&n);
while(n>0){
m=n%10;
sum=sum+m;
n=n/10;
}
printf("%d\n",sum);
}
return 0;
}
