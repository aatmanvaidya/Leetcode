#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,k;
long long int a[n];
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>a[i];   
if(a[i]%k==0)
cout<<"1";
else
cout<<"0";
}
}
return 0;
}