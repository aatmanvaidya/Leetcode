#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[1000000];
        cin>>s;
        int cnt=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='1' && s[i+1]=='0'){
                cnt++;
            }
        }
        cout<<cnt<<"\n";
        

    }
}