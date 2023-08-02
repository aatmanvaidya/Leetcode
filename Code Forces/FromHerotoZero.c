 #include<stdio.h>
int main(){
int t=0;
long long int n,k,cnt=0,dum=0;
scanf("%d",&t);
for(int j=0;j<t;j++){
scanf("%lld %lld",&n,&k);
while(n>0){
if(n%k==0){
n=n/k;
cnt++;
}
else{  
cnt =cnt +n%k;
n=(n/k)*k;
}
}
printf("%lld\n",cnt);
}
 
return 0;
}