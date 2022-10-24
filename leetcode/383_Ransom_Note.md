
# JavaScript Solutions

### Approach 1

```JS
/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    let hashMap = [];   // Here, hashMap can be an array or object

    for(let ch of magazine) {
        if(hashMap[ch]) hashMap[ch]++;
        else hashMap[ch] = 1;
    }

    for(let ch of ransomNote) {
        if(!hashMap[ch]) return false;
        else hashMap[ch]--;
    }

    return true;
};
```


### Approach 2

```JS
/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    for(let ch of ransomNote) {
        if(magazine.includes(ch)) magazine = magazine.replace(ch, '');
        else return false;
    }

    return true;
};
```



