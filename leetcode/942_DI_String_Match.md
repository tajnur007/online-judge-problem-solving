
# JavaScript Solution


```JS
/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
    let ans = [], min = 0, max = s.length;

    for(let c of s) {
        if(c == 'I') {
            ans.push(min++);
        } else {
            ans.push(max--);
        }
    }

    ans.push(min); // ans.push(max) is also correct

    return ans;
};
```



