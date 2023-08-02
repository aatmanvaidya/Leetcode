#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,h;
        cin>>m>>h;  
        double sum=m/pow(h,2);
        if(sum<=18){
            cout<<"1"<<"\n";
        }
        else if(sum>=19 && sum<=24){
            cout<<"2"<<"\n";
        }
        else if(sum>=25 && sum<=29){
            cout<<"3"<<"\n";
        }
        else if(sum>=30){
            cout<<"4"<<"\n";
        }

    }
}