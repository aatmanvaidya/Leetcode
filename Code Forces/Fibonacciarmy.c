#include<stdio.h>
int main(){
int n,a=0,b=1,c;
scanf("%d",&n);
if(n==1)
printf("1");
else if(n>=2){
for(int i=2;i<n;i++){
c=a+b;
a=b;
b=c;
}
printf("%d",c);
}
return 0;
}