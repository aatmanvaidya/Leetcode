#include<stdio.h>
#include<string.h>
int main(){
int n;
int u,tb,t,hb,h,thb,th;
int str[20];
scanf("%d",&n);
u=n%10;
n/=10;
tb=n%10;
t=tb*10;
n/=10;
hb=n%10;
h=hb*100;
n/=10;
thb=n%10;
th=thb*1000;
sprintf(str,"%d",n);
printf("%s",str);

return 0;

}