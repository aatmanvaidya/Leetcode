#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans;
        for(int i=0;i<accounts.size();i++){
            int cnt=0;
            for(int j=0;j<accounts[i].size(); j++){
                cnt+=accounts[i][j];

            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};