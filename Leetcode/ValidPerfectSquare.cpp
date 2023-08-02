#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isPerfectSquare(int num){
        if(num<0) return false;
        int l=1,r=num;
        while(l<=r){
            int mid=(l+r)/2;
            if(mid*mid==num) return true;
            else if(mid*mid<num) l=mid+1;
            else r=mid-1;
        }
        return false;
    }
};