
# JavaScript Solution


```JS
/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function(word, ch) {
    let flag = false, temp = '';

    for(let c of word) {
        if(!flag) temp = c + temp;
        else temp = temp + c;

        if(c === ch) flag = true;
    }

    if(flag) return temp;
    else return word;
};
```




