#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m,c[1001],f,cnt=0;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<m;i++){
cin>>b[i];
}
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
if(a[i]==b[j]){
f=a[i];
cnt++;
break;
}
}                    
}
if(cnt!=0){
cout<<"YES"<<"\n";
cout<<"1"<<" "<<f<<"\n";
}
else
cout<<"NO"<<"\n";
}
return 0;
}