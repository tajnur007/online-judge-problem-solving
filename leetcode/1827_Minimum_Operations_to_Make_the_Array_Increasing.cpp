


# C++ Solution

```C++
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0, len = size(nums);

        for(int i = 1; i < len; i++) {
            if(nums[i] <= nums[i - 1]) {
                ans += nums[i - 1] + 1 - nums[i];
                nums[i] = nums[i - 1] + 1;
            }
        }

        return ans;
    }
};
```




