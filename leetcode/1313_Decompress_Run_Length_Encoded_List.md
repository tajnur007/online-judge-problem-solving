
# JavaScript Solution

### Approach 1: Easy Process

```JS
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var decompressRLElist = function(nums) {
    let ans = [], len = nums.length;

    for(let i = 0; i < len; i = i + 2) {
        while(nums[i]--) {
            ans.push(nums[i + 1]);
        }
    }

    return ans;
};
```

### Approach 2: Best Process

```JS
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var decompressRLElist = function(nums) {
    let ans = [], len = nums.length;
    len = len - 2;

    while(len >= 0) {
        while(nums[len]--) {
            ans.unshift(nums[len + 1]);
        }
        len = len - 2;
    }

    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(short i = 0; i < nums.size(); i += 2) {
            while(nums[i]--) ans.push_back(nums[i+1]);
        }
        
        return ans;
    }
};
```


