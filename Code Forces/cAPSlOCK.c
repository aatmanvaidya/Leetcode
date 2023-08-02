#include<stdio.h>
#include<string.h>
int main() {
int l,i,cnt=0;
char s[1000];
scanf("%s",s);
l = strlen(s);
for(i=1;i<l;i++){
if(isupper(s[i]))
cnt++;
}
if(cnt==l-1){
for(i=0;i<l;i++){
s[i] = isupper(s[i])?tolower(s[i]):toupper(s[i]);
}
}
printf("%s",s);
return 0;
}