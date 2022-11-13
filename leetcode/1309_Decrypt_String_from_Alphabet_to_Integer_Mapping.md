
# JavaScript Solution


```JS
/**
 * @param {string} s
 * @return {string}
 */
var freqAlphabets = function(s) {
    const alphabets = ' abcdefghijklmnopqrstuvwxyz';
    let ans = '';

    for(let i = 0; i < s.length; i++) {
        if((i+2 < s.length) && (s[i+2] === '#')) {
            ans += alphabets[s.substring(i, i+2)];
            i += 2;
        } else {
            ans += alphabets[s[i]];
        }
    }

    return ans;
};
```





