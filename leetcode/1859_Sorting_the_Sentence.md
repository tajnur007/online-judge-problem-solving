
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */
var sortSentence = function(s) {
    let words = [];

    s.split(' ').forEach(word => {
        let len = word.length;
        let index = parseInt(word[--len]);
        let actualWord = word.substring(0, len);
        words[--index] = actualWord;
    });

    return words.join(' ');
};
```



