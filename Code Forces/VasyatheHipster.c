#include<stdio.h>
#include<math.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d %d",a<b?a:b,abs(a-b)/2);
return 0;
} 