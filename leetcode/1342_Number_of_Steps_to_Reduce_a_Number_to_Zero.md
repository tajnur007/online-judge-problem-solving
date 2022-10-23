
# JavaScript Solution

```JS
/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
    let ans = 0;

    while(num) {
        if(num % 2)  num--;
        else num /= 2;
        ans++;
    }

    return ans;
};
```



