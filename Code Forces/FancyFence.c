#include<stdio.h>
int main(){
int t,a;
scanf("%d",&t);
while(t--){
scanf("%d",&a);
360%(180-a)==0?printf("YES"):printf("NO");
}
return 0;
}