class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        short ans = 0, i, index = 0;
        
        for(i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                short n = (i - index - 1);
                ans += (short)((n * n + n) / 2);
                index = i;
            }
        }
        short n = (i - index - 1);
        ans += (short)((n * n + n) / 2);
        
        return ans;
    }
};
