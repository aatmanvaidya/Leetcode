#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if((a[i]+x)>=h){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}