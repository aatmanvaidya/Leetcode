#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int g,c;
        cin>>g>>c;
        int ans=(pow(c,2)/(2*g));
        cout<<ans<<"\n";
    }
    
}