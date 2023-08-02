#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int cnt=0,max=0;
        for(int i=0;i<n;i++){
            if(str[i]=='*'){
                cnt++;
                if(cnt>=max){
                    max=cnt;
                }
            }
            else{
                cnt=0;
            }
        }
        if(max>=k){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}