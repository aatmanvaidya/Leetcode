#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,flag=0;  
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(i+1<a[i]){
                flag=1; 
                break;
            }
        else{
            sum+=(i+1-a[i]);
        }        
        }
        if(flag==1){
            cout<<"Second"<<"\n";
        }
        else{
            if(sum%2==0){
            cout<<"Second"<<"\n";
            } 
            else{
            cout<<"First"<<"\n";
            }
        }
                
    }
    return 0;
}