
/*
#include<stdio.h>
#include<math.h>
int main(){
int t=0;
long int x,n,m,va,ls,sum=0,cnt=0;
scanf("%d",&t);
for(int b=0;b<t;b++){
scanf("%ld %ld %ld",&x,&n,&m);
for(int i=1;i<=n;i++){
va=floor(x/2)+10;
x=x/2;
sum = sum +va;
}
for(int j=1;j<=m;j++){
ls=x-10;
x=x-10;
cnt = cnt+ ls;
}
if(cnt+sum<=0)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
*/
// this is somehow not working
#include<stdio.h>
int main(){
int t=0,x,n,m;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d%d%d",&x,&n,&m);
while(x>20 && n--){
x=x/2+10;
}
x-m*10<=0?printf("YES\n"):printf("NO\n");
}
return 0;
}