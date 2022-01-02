#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> ans;
        int len = nums.size();
        
        for(int i=0; i<len; i++) {
            int need = target - nums[i];
            
            if(m[need]) {
                ans.push_back(m[need] - 1);
                ans.push_back(i);
                break;
            }
            else {
                m[nums[i]] = i + 1;
            }
        }
        
        return ans;
    }
};