#include<stdio.h>
int main(){
int t=0,bs;
float gs,hra,da;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d",&bs);
if(bs<1500)
{
hra=0.1*bs;
da=0.9*bs;
}
else
{
hra==500;
da=0.98*bs;
}
gs=bs+hra+da;
printf("%.2f",gs);
}
return 0;
} 