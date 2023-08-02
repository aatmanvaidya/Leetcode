#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==1){
            cout<<"West"<<"\n";
        }
        else if(x==2){
            cout<<"South"<<"\n";
        }
        else if(x==3){
            cout<<"East"<<"\n";
        }
        else if(x==4){
            cout<<"North"<<"\n";
        }
        else{
            if(x%4==0){
                cout<<"North"<<"\n";
            }
            else if(x%4==1){
                cout<<"West"<<"\n";
            }
            else if(x%4==2){
                cout<<"South"<<"\n";
            }
            else if(x%4==3){
                cout<<"East"<<"\n";
            }
        }
    }
}