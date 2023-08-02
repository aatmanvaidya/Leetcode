#include<stdio.h>
int main(){
int t=0,a,b,c;
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180)
printf("YES\n");
else
printf("NO\n");
}
return 0;

}