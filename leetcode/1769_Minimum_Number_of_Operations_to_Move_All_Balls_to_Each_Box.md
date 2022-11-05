
# JavaScript Solution

```JS
/**
 * @param {string} boxes
 * @return {number[]}
 */
var minOperations = function(boxes) {
    let ballIndexes = [], ans = [];

    for(let i = 0; i < boxes.length; i++) {
        if(boxes[i] === '1') ballIndexes.push(i);
    }

    for(let i = 0; i < boxes.length; i++) {
        let sum = 0;
        ballIndexes.forEach((index) => sum += Math.abs(index - i));
        ans.push(sum);
    }

    return ans;
};
```



