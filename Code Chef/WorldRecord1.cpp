#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    float k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;

    float multi=k1*k2*k3*v;
    float cmp=100/multi;
    cmp = round( cmp * 100.0 ) / 100.0; 
    float set=9.58;
    if(cmp>=set){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
    }
    

}