#include<iostream>
using namespace std;
int main(){
long int a,b,max;
cin>>a>>b;
max=(a>b)?a:b;
while(1){
if(max%a==0 && max%b==0){
cout<<max;
break;
}
else
max++;
}
return 0;
}