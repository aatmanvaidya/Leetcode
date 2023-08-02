#include<iostream>
using namespace std;
int cnt(int n){
int sum=0,ex=1;
while(n){
if(n%10){
sum+=n%10*ex;
ex*=10;
}
n/=10;
}
return sum;
}
int main(){
int a,b,c;
c=a+b;
cin>>a>>b;
if(cnt(a)+cnt(b)==cnt(c))
cout<<"YES";
else
cout<<"NO";
return 0;
}