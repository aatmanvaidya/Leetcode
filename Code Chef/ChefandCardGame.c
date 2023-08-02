#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n;                                                                                            
scanf("%d",&n);
int a[n],b[n];
int cnt=0,sum=0;
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
scanf("%d",&b[i]);
int cnta=0,sumb=0;
while(a[i]){
cnta+=a[i]%10;
a[i]/=10;
} 
while(b[i]){
sumb+=b[i]%10;
b[i]/=10;
}
if(cnta>sumb)
cnt++;
else if(cnta<sumb)
sum++;
else{
cnt++;
sum++;
}
if(cnt>sum)
printf("0 %d\n",cnt);
else if(cnt<sum)
printf("1 %d\n",sum);
else 
printf("2 %d\n",cnt);
}
}
return 0;
}