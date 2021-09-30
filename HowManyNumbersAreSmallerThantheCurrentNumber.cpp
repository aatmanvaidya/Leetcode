#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
        vector<int> temp=nums;
        
        sort(temp.begin(),temp.end());
        for(int i=n-1;i>=0;i--){
            mp[temp[i]] =i;            
        }
        for(int i=0;i<n;i++){
            nums[i]=mp[nums[i]];
        }
        return nums;
    }
};