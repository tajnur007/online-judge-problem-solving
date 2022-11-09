
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    let ans = '', cnt = 0;

    for(const c of s) {
        if(c === '(') {
            cnt++;
            if(cnt > 1) ans += c;
        } else {
            if(cnt > 1) ans += c;
            cnt--;
        }
    }

    return ans;
};
```



