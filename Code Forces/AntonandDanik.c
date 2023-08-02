/*
#include<stdio.h>
#include<string.h>
int main(){
long long int n;
char str[n+1];
int cnt=0;
scanf("%d",&n);
scanf("%s",str);
for(int i=0;i<n;i++){
if(str[i]=='A')
cnt++;
else
continue;
}
if(cnt>(strlen(str)/2))
printf("Anton");
else if(cnt==(strlen(str)/2))
printf("Friendship");
else
printf("Danik");
return 0;
}
*/
#include<stdio.h>
int main()
{
int n,a=0,d=0,i;
scanf("%d",&n);
char arr[n+1];
scanf("%s",arr);
for(i=0;i<n;i++)
{
if(arr[i]=='A')
a++;
else 
d++;
}
if(a==d)
printf("Friendship");
else if(a>d)
printf("Anton");
else 
printf("Danik");
}

`