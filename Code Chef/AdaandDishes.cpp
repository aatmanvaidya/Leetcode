#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
	int n;
	cin>>n;
	int c[4];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c, c + n, greater<int>());
    int sum=0,cnt=0;
    for(int i=0;i<n;i=i+2){
        if(sum==cnt){
            sum+=c[i];
            cnt+=c[i+1];
        }
        else if(sum>cnt){
            sum+= min(c[i+1],c[i]);
            cnt+=max(c[i],c[i+1]);
        }
    }
    cout<<max(sum,cnt)<<"\n";
    }
    return 0;
}