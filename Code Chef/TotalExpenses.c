#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
double q,p,fam;
while(t--){
scanf("%lf %lf",&q,&p);
if(q>1000)
{
fam=q*0.9*p;
}
else
{
fam=q*p;
}
printf("%lf",fam);
}
return 0;
}