
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {string}
 */

const checkString = (str) => {
    let flags = new Array(26).fill(false);
    let alreadyChecked = [];

    for(const ch of str) {
        if(!alreadyChecked.includes(ch)) {
            if(ch >= 'a') {
                let index = ch.charCodeAt(0) - 97;
                if(flags[index]) flags[index] = false;
                else if(!flags[index]) flags[index] = true;
            } else {
                let index = ch.charCodeAt(0) - 65;
                if(flags[index]) flags[index] = false;
                else if(!flags[index]) flags[index] = true;
            }

            alreadyChecked.push(ch);
        }
    }

    for(const flag of flags) {
        if(flag) return false;
    }

    return true;
}

var longestNiceSubstring = function(s) {
    let ans = '';

    for(let i = 0; i < s.length; i++) {
        for(let j = i + 1; j <= s.length; j++) {
            const subStr = s.substring(i, j);
            if(checkString(subStr) && (subStr.length > ans.length)) {
                ans = subStr;
            }
        }
    }

    return ans;
};
```



