#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double k,f;
        k = celsius + 273.15;
        f = (celsius * 1.8) + 32;
        return {k,f};
    }
};