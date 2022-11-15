
# JavaScript Solution


```JS
/**
 * @param {string} s
 * @return {number}
 */
var countGoodSubstrings = function(s) {
    let freq = {}, ans = 0, keysCnt = 0;

    for(let i = 0; i < 3; i++) {
        if(freq[s[i]]) freq[s[i]]++;
        else {
            freq[s[i]] = 1;
            keysCnt++;
        } 
    }

    if(keysCnt === 3) ans++;

    for(let i = 3; i < s.length; i++) {
        freq[s[i - 3]]--;
        if(!freq[s[i - 3]]) keysCnt--;

        if(!freq[s[i]]) {
            freq[s[i]] = 1;
            keysCnt++;
        } else {
            freq[s[i]]++;
        }

        if(keysCnt === 3) ans++;
    }

    return ans;
};
```



