#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
    
    int n;
    cin>>n;
    char s[n],p[n];
    cin>>s>>p;
    int sz=0,pz=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            sz++;
        }
        if(p[i]=='0'){
            pz++;
        }
    }
    if(sz==pz){
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
    
    }   

}