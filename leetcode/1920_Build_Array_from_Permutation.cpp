class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(auto value : nums) ans.push_back(nums[value]);
        return ans;
    }
};
