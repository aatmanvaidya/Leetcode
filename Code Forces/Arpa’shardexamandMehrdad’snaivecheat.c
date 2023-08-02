#include<stdio.h>
#include<math.h>
int main(){
long long int n;
scanf("%lld",&n);
if(n%4==1)
{
printf("8");
}
else if(n%4==2){
printf("4");
}
else if(n%4==2){
 printf("2");
}
else if(n==0){
printf("1");
}
else if(n%4==0){
printf("6");
}
return 0;
}