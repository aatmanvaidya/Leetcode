#include<stdio.h>
#include<string.h>
int main(){
int t,i;
char s[105];
scanf("%d",&t);
while(t--){
scanf("%s",s);
for(i=0;i<strlen(s);i++){
if(i%2!=0 || i==0)
printf("%c",s[i]);
}
printf("\n");
}
return 0;
}