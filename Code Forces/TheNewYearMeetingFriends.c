#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
printf("%d",(abs(a-b)+abs(b-c)+abs(c-a))/2);
return 0; 
}