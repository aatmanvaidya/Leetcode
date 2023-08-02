#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
int cnt=0,sum=0;
for(int i=0;i<n;i++){
cin>>a[i]>>b[i];
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
}
if(cnt>sum)
cout<<"0"<<" "<<cnt<<"\n";
else if(cnt<sum)
cout<<"1"<<" "<<sum<<"\n";
else 
cout<<"2"<<" "<<cnt<<"\n";
}
return 0;
}