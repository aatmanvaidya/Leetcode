#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[1000000];
        cin>>s;
        char *token = strtok(s, "0");
        int cnt=0;
        while (token != NULL){ 
        cout<<token<<"\n";
        token = strtok(NULL, "0");
        //cnt++; 
        }      
        //cout<<cnt<<"\n";
        
    }
}