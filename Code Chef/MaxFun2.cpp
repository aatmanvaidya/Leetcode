#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0){
        long long int x,y;
        x = abs(a[0]-a[(n/2)-1]) + abs((a[((n/2)-1)]-a[n-1]))+ abs(a[0]-a[n-1]);
        y = abs(a[0]-a[(n/2)]) + abs((a[(n/2)]-a[n-1]))+ abs(a[0]-a[n-1]);
        cout<<max(x,y)<<"\n";
    }
   else{
       cout<<abs(a[0]-a[(n/2)]) + abs((a[(n/2)]-a[n-1]))+ abs(a[0]-a[n-1])<<"\n";
    }
}       
    return 0;
   
}