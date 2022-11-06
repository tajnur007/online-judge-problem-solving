
# JavaScript Solution

```JS
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var applyOperations = function(nums) {
    let ans = [], zeros = [];
    
    for(let i = 0; i < nums.length - 1; i++) {
        if(nums[i] === nums[i+1]) {
            let mul = nums[i] * 2;
            if(mul) ans.push(mul);
            else zeros.push(mul);
            nums[i+1] = 0;
        } else {
            if(nums[i]) ans.push(nums[i]);
            else zeros.push(nums[i]);
        }
    }
    
    if(nums[nums.length - 1]) {
        ans.push(nums[nums.length - 1]);
    } else {
        zeros.push(nums[nums.length - 1]);
    }
    
    return [...ans, ...zeros];
};
```



