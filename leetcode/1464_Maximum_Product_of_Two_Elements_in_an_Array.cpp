class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(rbegin(nums), rend(nums));
        return (nums[0] - 1) * (nums[1] - 1);
    }
};
