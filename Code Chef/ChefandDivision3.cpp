#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long int n,k,d;
    cin>>n>>k>>d;
    long long int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    long long int div=sum/k;
   
        if(div<d){
            cout<<div<<"\n";
        }
        else if(div>d){
            cout<<d<<"\n";
        }
        else
        {
            cout<<div<<"\n";
        }
        

}
}