#include<stdio.h>
#include<string.h>
int main(){
char a[101],b[101],c[101],i;
int p[100]={},q[100]={};
gets(a);
gets(b);
gets(c);
for(i=0;i<strlen(a);i++)
p[a[i]]++;
for(i=0;i<strlen(b);i++)
p[b[i]]++;
for(i=0;i<strlen(c);i++)
q[c[i]]++;
for(i=0;i<100;i++){
if(p[i]!=q[i])
break;
}
i==100?printf("YES"):printf("NO");
return 0;
}