/*
#include<stdio.h>
#include<string.h>
int main(){
int n;
char str[n+1];
char main[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
scanf("%d%s",&n,str);
strupr(str);
strspn(main,str)==26?printf("YES"):printf("NO");
return 0;
} 
*/
// the logic of my solution is fairly corret, but it is showing runtime error on test case 1
#include<stdio.h>
#include<string.h>
char str[26]="ABCDEFGHIJKLMNOPQRSTUVXWYZ";
char ara[101];
int main()
{
scanf("%*d%s", ara);
strupr(ara);
strspn(str, ara)==26?printf("YES"):printf("NO");
}