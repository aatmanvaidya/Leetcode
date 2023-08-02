#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int aa,bb,cc,t,a,b,c;
        cin>>aa>>bb>>cc>>t>>a>>b>>c;
        if( (a>=aa) && (b>=bb) && (c>=cc) && ((a+b+c)>=t)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}