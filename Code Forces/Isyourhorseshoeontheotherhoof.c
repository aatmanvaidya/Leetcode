#include<stdio.h>
int main(){
long long int s[4];
int cnt=0;
for(int g=0;g<4;g++){
scanf("%lld",&s[g]);
}
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++){
if(s[i]==s[j]){
cnt++;
break;
}
}
}
printf("%d",cnt);
return 0;
}