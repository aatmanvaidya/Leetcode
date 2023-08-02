#include<stdio.h>
int main(){
/*
int n,nl=0,i,cnt=0,ln;
char str[1005];
scanf("%d",&n);
while(n){
n/=10;
nl++;
}
sprintf(str,"%d",n);
//printf("%s",str);
for(i=0;i<strlen(str);i++){
if(str[i]=='4' || str[i]=='7')
cnt++;
else
continue;
}
if(cnt==nl)
ln=n;
if(ln==n)
printf("YES");
else if(n%4==0 || n%7==0)
printf("YES");
else
printf("NO");
*/
int n;
scanf("%d",&n);
printf((n%4==0)||(n%7==0)||(n%47==0)||(n%74==0)||(n%477==0) ? "YES" : "NO");
return 0;
}