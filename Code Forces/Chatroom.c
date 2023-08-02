#include<stdio.h>
int main(){
int i=0;
char main[5]="hello",c;
while(scanf("%c",&c) && c!='\n'){
if(c==main[i])
i++;
}
if(i==5) 
printf("YES");
else 
printf("NO");
return 0;
}