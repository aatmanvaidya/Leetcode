#include<stdio.h>
#include<math.h>
int main(){
int t=0,n,cnt=0;
int a[n];
scanf("%d",&t);
for(int g=0;g<t;g++){
scanf("%d",&n);
for(int k=0;k<n;k++){
scanf("%d",&a[k]);
}
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if((a[i]%2==0 && a[j]%2==0) || abs(a[i]-a[j])==0){
cnt++;
break;}
}
}
if(cnt>=1)
printf("YES");
else
printf("NO");
}
return 0;
}

// i cant figure out, but something has gone wrong with the code, as it does not run.
