class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(begin(nums), end(nums));
        return __gcd(nums[0], nums[size(nums) - 1]);
    }
};
