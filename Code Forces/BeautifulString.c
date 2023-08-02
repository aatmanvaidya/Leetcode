#include<stdio.h>
int main(){
int t=0;
scanf("%d",&t); 
char s[100000];
int i,j=1;
for(int g=0;g<t;g++){
scanf("%s",s);
if(s[0]=='?'){
if(s[1]=='a'||s[1]=='b'||s[1]=='\0'||s[1]=='?')
s[0]='c';
else
s[0]='a';
}
for(s[i]=1;s[i]!='\0';i++){
if(s[i]=='?'){
if(s[i-1]=='a'&&s[i+1]!='b') s[i]='b';
else if(s[i-1]=='a'&&s[i+1]=='b') s[i]='c';
else if(s[i-1]=='b'&&s[i+1]!='c') s[i]='c';
else if(s[i-1]=='b'&&s[i+1]=='c') s[i]='a';
else if(s[i-1]=='c'&&s[i+1]!='a') s[i]='a';
else if(s[i-1]=='c'&&s[i+1]=='a') s[i]='b';
}
if(s[i]==s[i-1]){
j=0;
break;
}
j!=0?printf("%s\n",s):printf("-1\n");
}
}
return 0;
}