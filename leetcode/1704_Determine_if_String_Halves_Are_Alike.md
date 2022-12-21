
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {boolean}
 */
var halvesAreAlike = function(s) {
    let half = s.length / 2;
    let count = 0;
    let vowels = {
        'a': true, 
        'e': true, 
        'i': true, 
        'o': true, 
        'u': true, 
        'A': true, 
        'E': true, 
        'I': true, 
        'O': true, 
        'U': true
    };

    for(let i = 0; i < half; i++) {
        if(vowels[s[i]]) count++;
        if(vowels[s[half + i]]) count--;
    }

    if(count) return false;
    return true;
};
```
