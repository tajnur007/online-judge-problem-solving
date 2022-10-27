
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {number}
 */
var balancedStringSplit = function(s) {
    let ans = 0, cnt = 0;

    for(let i = 0; i < s.length; i++) {
        if(s[i] === 'L') cnt++;
        else cnt--;

        if(cnt === 0) ans++;
    }

    return ans;
};
```



