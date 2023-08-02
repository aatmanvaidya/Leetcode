#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long int h,p;
cin>>h>>p;
h=h-p;
p=p/2;
if(h>p)
cout<<"0"<<"\n";
else
cout<<"1"<<"\n";
}
return 0;
}