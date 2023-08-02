#include<stdio.h>
int main(){
int t=0;
int a,b;
scanf("%d",&t);
while(t>0){
scanf("%d %d",&a,&b);
printf("%d\n",(a*b+1)/2);
t--;
}
return 0;
}