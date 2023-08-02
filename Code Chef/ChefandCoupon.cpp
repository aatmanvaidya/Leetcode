#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,c;
        cin>>d>>c;
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        int b[3];
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        int coup=0,dev=0, s=a[0]+a[1]+a[2], g=b[0]+b[1]+b[2];
        if(s<150 && g<150){
            cout<<"NO"<<"\n";
        }
        else if( (s>=150 && g<150) || (s<150 && g>=150)){
            coup= s+g+c+d;
            dev = s+g+d+d;
        }
        else if(s>=150 && g>=150){
            coup = s+g+c;
            dev = s+g+d+d;            
        }

/*         cout<<dev<<"\n";
        cout<<coup<<"\n"; */

        if(dev>coup){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
}