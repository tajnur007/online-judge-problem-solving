
# JavaScript Solution

```JS
var runningSum = function(nums) {
    const len = nums.length;

    for(let i = 1; i < len; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    return nums;
};
```


# C++ Solution

```C++
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {        
        for(short i = 1; i < nums.size(); i++)
            nums[i] += nums[i - 1];
        
        return nums;
    }
};
```
