#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int a[k];
        int size = 0;
        for(int i = 1;true; i++){
            if(size < k){
                if(i%3 != 0 && i%10!=3){
                    a[size] = i;
                    size++;
                }
            }
            else break;
        }
        cout<<a[k-1]<<"\n";
    }
    return 0;
}