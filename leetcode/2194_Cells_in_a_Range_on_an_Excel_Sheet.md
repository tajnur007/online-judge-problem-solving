
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @return {string[]}
 */
var cellsInRange = function(s) {
    let chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';

    let start = s.charCodeAt(0) - 65;   // ASCII value of the character 'A' is 65
    let end = s.charCodeAt(3) - 64;   // Substracted 64 for checking start < end
    let firstDigit = parseInt(s[1]);
    let secondDigit = parseInt(s[4]);
    let ans = [];

    while(start < end) {
        for(let i = firstDigit; i <= secondDigit; i++) {
            ans.push(chars[start] + i);
        }

        start++;
    }

    return ans;
};
```



