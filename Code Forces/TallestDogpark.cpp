#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    if(l==1 || l==2){
        cout<<"0"<<"\n";
    }
    else{
        if(l%2!=0){
            cout<<l/2<<"\n";
        }
        else{
            cout<<(l/2)-1<<"\n";
        }
    }
    return 0;
}