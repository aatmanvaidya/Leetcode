#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans;
        if(n==1 || n==2){
            ans = 2;
        }
        else if(n%2==0){
            ans = n;
        }
        else{
            ans = 2*n;
        }
        return ans;
    }
};