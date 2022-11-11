
# JavaScript Solution

### Approach 1: 

```JS
/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
    let cnt = 0;
    
    for(const pattern of patterns) {
        if(word.includes(pattern)) cnt++;
    }

    return cnt;
};
```

### Approach 2: 

```JS
/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
    return patterns.reduce((pre, cur) => word.includes(cur) ? ++pre : pre, 0);
};
```



