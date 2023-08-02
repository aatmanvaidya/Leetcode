#include<stdio.h>
int main(){
long long int n;
scanf("%lld",&n);
char s[][9]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
while(n>5){
n=n/2-2;
}
puts(s[n-1]);
return 0;
}