
# JavaScript Solution


### Approach 1: Good

```JS
/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let alphabets = 'abcdefghijklmnopqrstuvwxyz';
    let check = [];
    
    for(let ch of sentence) {
        if(!check[ch]) check[ch] = true;
    }

    for(let ch of alphabets) {
        if(!check[ch]) return false;
    }

    return true;
};
```


### Approach 2: Better

```JS
/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let check = [], cnt = 0;
    
    for(let ch of sentence) {
        if(!check[ch]) {
            check[ch] = true;
            cnt++;
        }
    }

    return cnt == 26;
};
```


### Approach 3: Best

```JS
/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let charSet = new Set();
    
    for(let i = 0; i < sentence.length; i++) {
        charSet.add(sentence[i]);
    }

    return charSet.size == 26;
};
```



