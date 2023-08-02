#include<stdio.h>
int main()
{
char z[101];
scanf("%s",z);
int a=strlen(z),i,j;
for(i=0;i<strlen(z);i++)
{
for(j=i+1;j<strlen(z);j++)
{
if(z[i]==z[j]){a--;break;}
}
}
puts(a%2?"IGNORE HIM!":"CHAT WITH HER!");
return 0;
}