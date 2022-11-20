
# JavaScript Solution

```JS
/**
 * @param {number} n
 * @return {string}
 */
var generateTheString = function(n) {
    let ans = '';

    if(n === 1) return 'a';

    if(n % 2) {
        for(let i = 0; i < n - 2; i++) {
            ans += 'a';
        }
        ans += 'bc';
    } else {
        for(let i = 0; i < n - 1; i++) {
            ans += 'a';
        }
        ans += 'b';
    }

    return ans;
};
```




