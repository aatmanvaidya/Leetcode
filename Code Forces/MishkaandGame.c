#include<stdio.h>
int main(){
int n,m,c,sum=0,cnt=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d %d",&m,&c);
if(m>c)
sum++;
else if(c>m)
cnt++;
}
if(sum>cnt)
printf("Mishka");
else if(sum==cnt)
printf("Friendship is magic!^^");
else
printf("Chris");
return 0;
}