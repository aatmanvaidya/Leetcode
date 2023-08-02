#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int fs = x*7;
        int ss = (y*d)+(z*(7-d));
        //cout<<fs;
        cout<<max(fs,ss)<<"\n";
    }
}