#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
            int cnt=0;
            vector<bool> ans;
            for(int i=0;i<candies.size();i++){
                cnt = max(cnt, candies[i]);
            }
            for(int i=0;i<candies.size();i++){
                if((candies[i]+extraCandies)>=cnt){
                    ans.push_back(true);
                } else{
                    ans.push_back(false);
                }
            }
            return ans;
        }
};