#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
int a,b=0,c,cek=0;
while(T){
scanf("%d",&a);
if(a!=b) cek++;
b=a;
T=T-1;
}
printf("%d",cek);
return 0;
}