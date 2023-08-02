#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,rem=n%4,cnt=0;    
        cin>>n;
        cnt=(n-rem/4)*44;
        if(n==1){
            cout<<"20"<<"\n";
        }
        else if(n==2){
            cout<<"36"<<"\n";
        }
        else if(n==3){
            cout<<"51"<<"\n";
        }
        else if(n==4){
            cout<<"60"<<"\n";
        }
        else{

            if(rem==0){
                cnt+=16;
            }
            else if(rem==1){
                cnt+=32;
            }
            else if(rem==2){
                cnt+=44;
            }
            else if(rem==3){
                cnt+=55;
            }
        cout<<cnt<<"\n";    
        }
    }
}