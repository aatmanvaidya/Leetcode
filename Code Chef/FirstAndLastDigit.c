#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
long int n,ld,fd,sum;
scanf("%ld",&n);
ld=n%10;
while(n>=10){
 n=n/10;
}
fd=n;
sum=fd+ld;
printf("%ld\n",sum);
}
return 0;
}