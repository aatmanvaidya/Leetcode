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
        int cnt=0,max=0,flag=0;
        for(int i=0;i<n;i++){
            if(str[i]=='*'){
                cnt++;
                if(cnt>=max){
                    max=cnt;
                }
            }
            else{
                cnt=0;
                if(max==k){ 
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}