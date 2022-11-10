
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var replaceDigits = function(s) {
    const characters = 'abcdefghijklmnopqrstuvwxyz';
    let ans = '';

    for(let i = 1; i < s.length; i += 2) {
        const index = s.charCodeAt(i-1) - 97 + + s[i];
        ans += s[i-1] + characters[index];
    }

    if(ans.length < s.length) ans += s[s.length - 1];

    return ans;
};
```



