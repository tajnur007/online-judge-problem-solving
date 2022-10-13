
# JavaScript Solution

## Approach 1:
```
var getConcatenation = function(nums) {
    let arr = [];
    let len = nums.length;

    for(let i = 0; i < len; i++) {
        arr[i] = arr[i + len] = nums[i];
    }

    return arr;
};
```

## Approach 2:
```
var getConcatenation = function(nums) {
    return [...nums, ...nums];
};
```


# C++ Solution

```
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        
        for(int i = 0; i < len; i++) nums.push_back(nums[i]);
        
        return nums;
    }
};
```
