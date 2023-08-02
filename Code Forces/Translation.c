#include<stdio.h>
#include<string.h>
int main(){
char s1[101],s2[101];
scanf("%s %s",s1,s2);
puts(strcmp(s1,strrev(s2)) ? "NO" : "YES");
}