class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {        
        for(short i = 1; i < nums.size(); i++)
            nums[i] += nums[i - 1];
        
        return nums;
    }
};
