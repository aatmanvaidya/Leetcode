#include<bits/stdc++.h>
using namespace std;

long long int maxfun(int i, int j, int k, long long int arr[]) 
{  
    return  abs(arr[i] - arr[j]) + abs(arr[j]-arr[k]) + abs(arr[k]-arr[i]);;
}

int main(){
    int t;
    cin>>t;
    while (t--){ 
    
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];           
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<n;k++){
                maxfun(i,j,k,a);
                if(maxfun(i,j,k,a)>sum){
                    sum = maxfun(i,j,k,a);
                }
            }
        }
    }
    cout<<sum<<"\n";
    }
return 0;
}