#include<stdio.h>
#include<string.h>
int main(){
int n,cnt=0;
scanf("%d",&n);
char str[n];
scanf("%s",str);
for(int i=0;i<n;i++){
if(str[i]==str[i+1])
cnt++;
}
printf("%d",cnt);
return 0;
}
