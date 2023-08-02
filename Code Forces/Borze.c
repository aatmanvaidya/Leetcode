/*
#include<stdio.h>
#include<string.h>
int main(){
char str[201];
scanf("%s",str);
for(int i=0;i<strlen(str);i++){
if(str[i]=='.')
printf("0");
else if(str[i]=='-' && str[i+1]=='.' )
printf("1");
else if(str[i]=='-' && str[i+1]=='-' )
printf("2");
}
return 0;
}
*/

#include<stdio.h>
char s[205];
int main()
{
	scanf("%s",s);
	int i;
	for(i=0;s[i];i++){
        putchar(s[i]=='.'?'0':(s[++i]=='.'?'1':'2'));
	}
}