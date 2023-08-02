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
    cout<<fixed<<setprecision(2);
    //cout<<cmp;
    if(cmp<9.58){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
    

}