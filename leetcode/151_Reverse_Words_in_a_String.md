
# JavaScript Solution

### Approach 1: Elaborated Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let words = s.trim().split(' ');
    let ans = '';

    for(const word of words) {
        if(word) {
            ans = word + ' ' + ans;
        }
    }

    return ans.trim();
};
```


### Approach 2: Shortest Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return s.split(' ').filter(word => word).reverse().join(' ');
};
```




