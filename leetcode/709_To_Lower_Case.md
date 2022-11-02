
# JavaScript Solution


### Approach 1: Implemented Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function(s) {
    let ans = '';

    for(let i = 0; i < s.length; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            let asciiValue = s.charCodeAt(i);
            ans += String.fromCharCode(32 + asciiValue);
        } else {
            ans += s[i];
        }
    }

    return ans;
};
```

### Approach 2: Easiest Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function(s) {
    return s.toLowerCase();
};
```


 
