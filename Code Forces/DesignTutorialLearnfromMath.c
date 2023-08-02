#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int x=(n%2==0)?8:9;
printf("%d %d",x,n-x);
return 0;
}