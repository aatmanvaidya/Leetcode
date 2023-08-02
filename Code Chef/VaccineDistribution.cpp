#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,d,cnt=0,temp;
        cin >> n >> d;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]<=9 || a[i]>=80)
                cnt++;
        }
        int sum = cnt/d;
        if(cnt%d!=0)
            sum+=1;
        int sum1 = (n-cnt)/d;
        if((n-cnt)%d!=0)
            sum1+=1;
        cout << sum+sum1 << "\n";
    }
    return 0;
}