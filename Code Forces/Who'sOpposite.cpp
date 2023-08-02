#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a%2==0 || b%2==1) && (a%2==1 || b%2==0) && (c%2==0) && (max(a,b)>(2*min(a,b)))){
            cout<<c*2<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }
    }
    
}