#include<stdio.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);
if(m>n)
printf("-1");
else{
for(int i=(n+1)/2;i<(n+1)/2+m;i++){
if(i%m==0){
printf("%d",i);
break;
}
}
}
return 0;
}