#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jlen=jewels.size();char str;int slen=stones.size();
        int i,j,cnt=0;
        for(i=0;i<jlen;i++){
            str=jewels[i];
            for(j=0;j<slen;j++){
                if(str==stones[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};