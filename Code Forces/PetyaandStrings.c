/*
#include<stdio.h>
#include<string.h>
int main(){
char str1[102],str2[102],str3[102],str4[102];
scanf("%s\n %s",str1,str2);
if(strcmp(strlwr(str1),strlwr(str2))==0)
printf("0");
else if(strcmp(strlwr(str1),strlwr(str2))>0)
printf("1");
else
printf("-1:");
return 0;
} 

*/

#include<stdio.h>
int main()
{
char a[100],b[100];
scanf("%s%s",a,b);
printf("%d",strcasecmp(a,b));
}