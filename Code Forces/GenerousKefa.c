/*
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,k;
char str[n+100];
scanf("%d %d",&n,&k);
scanf("%s",str);
int c;
for(int i=0;str[i]!='\0';i++){
c=0;
for(int j=0;str[j]='\0';j++){
if(str[i]==str[j]){
c++;
}
if(c>k){
printf("NO");
exit(0);
}
}
}
printf("YES");
return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
int main(n,k)
{scanf("%d%d",&n,&k);
char s[n+1];
int i,j,c;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
c=0;
for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
c++;	
if(c>k)
{
printf("NO");
exit(0);	
}
}	
}
printf("YES");
}