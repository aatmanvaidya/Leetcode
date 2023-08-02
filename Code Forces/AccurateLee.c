#include<stdio.h>
#include<string.h>
int main(){
int n,t,k,i;
char s[100001];
scanf("%d",&t);
while(t--){
scanf("%d %s", &n, s);
int c=0, r=0;
for(i=0; i<n; i++)
{
if(s[i]=='0')
c++;
else
break;
}
for(k=n-1; k>=0; k--)
{
if(s[k]=='1')
r++;
else
break;
}
if(k>i){
c++;
}
if(c==0 && r==0)
printf("0");
else
{
for(int h=1; h<=c; h++){
printf("0");
}
for(int j=1; j<=r; j++)
{
printf("1");
}
}
printf("\n");
}
return 0;
}