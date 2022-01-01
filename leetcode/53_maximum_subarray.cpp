#include<bits/stdc++.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int preSum = nums[0];
        int len = nums.size();
        
        for(int i=1; i<len; i++) {
            if(preSum + nums[i] > nums[i]) 
                preSum = preSum + nums[i];
            else 
                preSum = nums[i];
            
            if(preSum > sum)
                sum = preSum;
        }
        
        return sum;
    }
};