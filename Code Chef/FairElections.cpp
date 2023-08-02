#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    int sum=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        cnt+=b[i];
    }
    if(sum>cnt){
        cout<<"0"<<"\n";
    }
    else
    {
        
    }
    
}