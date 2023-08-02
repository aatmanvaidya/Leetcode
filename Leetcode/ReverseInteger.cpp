#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int S=0;
        while(x != 0){
            S = S * 10 + x % 10;
            x /= 10;
        }
        if ( S < INT_MIN ||  S > INT_MAX) return 0;
        return S;
    }
};