
# JavaScript Solution


### Approch 1: O(n) solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let reverseWord = '', finalSentence = '';

    for(const c of s) {
        if(c === ' ') {
            finalSentence += reverseWord + c;
            reverseWord = '';
        } else {
            reverseWord = c + reverseWord;
        }
    }

    finalSentence += reverseWord;

    return finalSentence;
};
```

### Approach 2: Solution in one line

```JS
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    return s.split(' ').map(word => word.split('').reverse().join('')).join(' ');
};
```



