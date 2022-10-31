
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function(s) {
    let paren = 0, ans = 0;

    for(let i = 0; i < s.length; i++) {
        if(s[i] === '(') {
            paren++;
            if(paren > ans) ans = paren;
        }
        else if(s[i] === ')') paren--;
    }

    return ans;
};
```



