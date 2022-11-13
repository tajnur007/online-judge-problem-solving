
# JavaScript Solution

```JS
/**
 * @param {number[]} nums
 * @return {number}
 */
var repeatedNTimes = function(nums) {
    let vis = [];

    for(const num of nums) {
        if(vis[num]) return num;
        else vis[num] = true;
    }
};
```



