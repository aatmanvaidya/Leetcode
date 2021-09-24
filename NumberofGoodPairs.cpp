#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(),sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] == nums[j]){
                    sum++;
                }
            }
        }   
        return sum;
    }
};