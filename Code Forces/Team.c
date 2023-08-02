#include<stdio.h>
int main(){
int t=0;
int x,y,z,cnt=0;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d %d %d",&x,&y,&z);
if(x+y+z>=2)
cnt++;
}
printf("%d",cnt);
return 0;
}