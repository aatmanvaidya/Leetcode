#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, cnt=0;
        cin>>n;
        long long int flag=n;
        while(n>0){
            n/=2;
            cnt++;
        }
        long long int a = pow(2,cnt-1)-1;
        long long int b = a ^ flag;
        cout <<a * b<<"\n"; 
 
    }
}