
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {number}
 */
var countAsterisks = function(s) {
    let ans = 0;
    let flag = true;

    for(const c of s) {
        if(c === '|') flag = !flag;
        else if(flag && c === '*') ans++;
    }

    return ans;
};
```



