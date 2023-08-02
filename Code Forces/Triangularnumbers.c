#include<stdio.h>
int main(){
int n;
int a[31]={1,3,6,10,15,21,28,36,45,55,66,78,91,105,120,136,153,171,190,210,231,253,276,300,325,351,378,406,435,465,496};
scanf("%d",&n);
int cnt=0;
for(int i=0;i<31;i++){
if(a[i]==n)
cnt++;
else
continue;
}
if(cnt==1)
printf("YES");
else 
printf("NO");
return 0;
}