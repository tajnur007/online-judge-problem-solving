
# JavaScript Solution

```JS
/**
 * @param {string} key
 * @param {string} message
 * @return {string}
 */
var decodeMessage = function(key, message) {
    let alphabets = 'abcdefghijklmnopqrstuvwxyz';
    let hash = {};
    let i = 0;

    for(let ch of key) {
        if(!hash[ch] && ch !== ' ') {
            hash[ch] = alphabets[i];
            i++;
        }
    }

    hash[' '] = ' ';
    let decodedMessage = '';
    
    for(let ch of message) {
        decodedMessage += hash[ch];
    }

    return decodedMessage;
};
```



