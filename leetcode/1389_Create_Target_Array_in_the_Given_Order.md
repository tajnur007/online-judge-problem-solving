
# JavaScript Solution

```JS
/**
 * @param {number[]} nums
 * @param {number[]} index
 * @return {number[]}
 */
var createTargetArray = function(nums, index) {
    let ans = [];

    index.forEach((idx, i) => {
        ans.splice(idx, 0, nums[i]);
    });

    return ans;
};
```



# C++ Solution

```C++
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        
        for(short i = 0; i < index.size(); i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    }
};
```




