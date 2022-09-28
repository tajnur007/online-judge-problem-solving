class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size() - 1;
        
        for(int i=0; i<len; i++) {
            if(nums[i] == nums[i+1])
                return true;
        }
        
        return false;
    }
};
