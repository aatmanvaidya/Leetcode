#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,k;
        cin>>n>>x>>k;
        //long long int cnt = x%k;
        if(x%k==0){
            cout<<"YES"<<"\n";
        }
        else if( (n+1)%k== x%k){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}