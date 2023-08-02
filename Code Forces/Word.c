/*
#include<stdio.h>
#include<string.h>
int main(){
char str[101];
int a=0,b=0;
scanf("%s",str);
for(int i=0;str[i]='\0';i++){
if(str[i]>='A' && str[i]<='Z')
a++;
else
continue;
if(str[i]>='a' && str[i]<='z')
b++;
else
continue; 
}
if(a>b)
printf("%s",strupr(str));
else
printf("%s",strlwr(str));

return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main(){
char s[101];
int cnt=0;
scanf("%s",s);
for(int i=0;i<strlen(s);i++)
if(s[i]<'a')
cnt++;
printf("%s",cnt>strlen(s)/2 ? strupr(s):strlwr(s));
}