
# JavaScript Solution 

```JS
/**
 * @param {number[]} nums
 * @param {number} space
 * @return {number}
 */
var destroyTargets = function(nums, space) {
    let hash = [], len = nums.length;
    
    for(let i = 0; i < len; i++) {     
        let rem = nums[i] % space;
        if(hash[rem]) hash[rem]++;
        else hash[rem] = 1;
    }
    
    let ans = nums[0], ansHash = hash[nums[0] % space];
    
    for(let i = 1; i < len; i++) {
        let currentHashValue = hash[nums[i] % space];
        if((currentHashValue > ansHash) || ((currentHashValue == ansHash) && (nums[i] < ans))) {
            ans = nums[i];
            ansHash = hash[ans % space];
        }
    }
    
    return ans;
};
```



