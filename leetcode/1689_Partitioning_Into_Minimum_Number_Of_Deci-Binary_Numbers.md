
# JavaScript Solution


### Approach 1: Slower process
```JS
/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    let ans = '0';

    for(const c of n) {
        if(c > ans) ans = c;
    }

    return ans;
};
```

### Approach 2: Faster process
```JS
/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    return Math.max(...n.split(''));
};
```



