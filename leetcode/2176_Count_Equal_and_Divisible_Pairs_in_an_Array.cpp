class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        short len = size(nums), ans = 0;

        for(short i = 0; i < len; i++) {
            for(short j = i + 1; j < len; j++) {
                if((nums[i] == nums[j]) && !(i * j % k))
                    ans++;
            }
        }

        return ans;
    }
};
