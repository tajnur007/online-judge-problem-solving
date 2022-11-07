
# JavaScript Solution 

```JS
/**
 * @param {string} rings
 * @return {number}
 */
var countPoints = function(rings) {
    let len = rings.length;
    let stands = [[], [], [], [], [], [], [], [], [], []];

    for(let i = 0; i < len; i += 2) {
        let index = parseInt(rings[i+1]);
        if(!stands[index].includes(rings[i])) {
            stands[index].push(rings[i]);
        }
    }

    let ans = 0;
    for(let i = 0; i < stands.length; i++) {
        if(stands[i].length === 3) ans++;
    }

    return ans;
};
```



