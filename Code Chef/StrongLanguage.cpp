#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        long int cnt=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='*' && str[i+1]=='*'){
                cnt++;
            }
        }
        if(cnt==0){
            cout<<"NO"<<"\n";
        }
        else if((cnt+1)==k){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";   
        }

    }
}