#include<stdio.h>
int b[10000]={0};
int main()
{
int i,sum=0;
char a[3000];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z'&&b[a[i]]==0)
{
sum++;
b[a[i]]++;
}	
}
printf("%d",sum);
}