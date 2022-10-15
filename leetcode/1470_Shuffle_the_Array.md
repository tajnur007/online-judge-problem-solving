
# JavaScript Solution

```JS
var shuffle = function(nums, n) {
    let ans = [];

    for(let i = 0; i < n; i++) {
        ans.push(nums[i]);
        ans.push(nums[i + n]);
    }

    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        
        for(int i = 0; i < n; i++) {
            vec.push_back(nums[i]);
            vec.push_back(nums[n + i]);
        }
        
        return vec;
    }
};
```
