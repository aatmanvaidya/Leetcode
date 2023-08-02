/*
#include<stdio.h>
int main(){
int n,h,arr[n];
int cnt=0,sum=0;
scanf("%d %d",&n,&h);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++){
if(arr[j]<=h)
cnt++;
else
sum=sum+2;
}
printf("%d",cnt+sum);
return 0;
}

*/

//my soln was wrong on test case 2 but when i checked the answer was coming, so i dont know what has went wrong

#include<stdio.h>
int main(){
int n,h,t,a=0;
for(scanf("%d%d",&n,&h);n--;){
scanf("%d",&t);
t>h? a+=2:a++;
}
printf("%d",a);
}