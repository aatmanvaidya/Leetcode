#include<stdio.h>
#include<string.h>
int main()
{
char s[101];
scanf("%s",s);
int l=strlen(s);
int m=1,w=0,i;
for(i=0;i<l;i++)
{
if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
m=1;
else
m++;
if(m>=w)
w=m;
}
printf("%d\n",w);
return 0;
}