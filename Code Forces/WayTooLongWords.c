
#include<stdio.h>
#include<string.h>
int main(){
int t=0;
char str[200];
scanf("%d",&t);
for(int i=0;i<t;i++){
scanf("%s",str);
if(strlen(str)>10){
printf("%s %d %s\n",str[0],strlen(str),str[strlen(str)-1]);
}
else if(strlen(str)<=10){
printf("%s\n",str);
}
}
return 0;
}

/*
#include<stdio.h>
int main()
{
char s[110],p;
int n;
scanf("%d\n",&n);
for(;gets(s),n--;)
if((p=strlen(s))>10)
printf("%c%d%c\n",*s,p-2,s[p-1]);
else
puts(s);
}
*/