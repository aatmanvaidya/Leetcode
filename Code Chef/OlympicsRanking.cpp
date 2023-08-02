#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        int a=g1+s1+b1;
        int b = g2+s2+b2;
        if(a>b){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"2"<<"\n";
        }
    }
    
}