#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a==b==1){
            cout<<1<<"\n";
        }
        else if(a%2==0 && b%2==0){
            if(a==b){
                cout<<(a*a)/2<<"\n";
            }
            else{
                cout<<(max(a,b)*min(a,b))/2<<"\n";
            }
        }
        else if (a%2!=0 && b%2!=0)
        {
            if(a==b){
                cout<<a*2<<"\n";
            }
            else
            {
                cout<<(a*b)/2+1<<"\n";
            }
        }
        else if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0)){
            cout<<(a*b)/2<<"\n";   
        }
    }
}