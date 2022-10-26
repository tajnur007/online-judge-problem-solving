
# JavaScript Solution

```JS
/**
 * @param {string} key
 * @param {string} message
 * @return {string}
 */
var decodeMessage = function(key, message) {
    let hash = {};
    let alphabets = 'abcdefghijklmnopqrstuvwxyz';
    let i = 0;

    for(let ch of key) {
        if(!hash[ch] && ch !== ' ') {
            hash[ch] = alphabets[i];
            i++;
        }
    }

    let finalString = '';
    for(let ch of message) {
        if(ch === ' ') {
            finalString += ' ';
        } else {
            finalString += hash[ch];
        }
    }

    return finalString;
};
```



