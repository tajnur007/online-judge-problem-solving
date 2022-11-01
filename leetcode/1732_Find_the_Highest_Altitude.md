
# JavaScript Solution

```JS
/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    let ans = 0, current = 0;

    for(const value of gain) {
        current += value;
        if(current > ans) ans = current;
    }

    return ans;
};
```



