
# JavaScript Solution

```
var buildArray = function(nums) {
    let len = nums.length;
    let ans = [];

    for(let i = 0; i < len; i++) {
        ans.push(nums[nums[i]]);
    }

    return ans;
};
```


# C++ Solution

```
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(auto value : nums) ans.push_back(nums[value]);
        return ans;
    }
};
```
