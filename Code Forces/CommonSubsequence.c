#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,m,c;
scanf("%d",&n,&m);
int a[n],b[m];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int j=0;j<m;j++){
scanf("%d",&b[j]);
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[i]==a[j]){
c=a[i];
break;
}
}
}
printf("1 %d\n",c);
}
return 0;
}