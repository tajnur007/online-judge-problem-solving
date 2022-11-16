
# JavaScript Solution 

### Sliding Window Technique 


```JS
/**
 * @param {number[]} arr
 * @param {number} k
 * @param {number} threshold
 * @return {number}
 */
var numOfSubarrays = function(arr, k, threshold) {
    let ans = 0, sum = 0;

    for(let i = 0; i < k; i++) {
        sum += arr[i];
    }

    if((sum / k) >= threshold) ans++;

    for(let i = k; i < arr.length; i++) {
        sum += arr[i] - arr[i - k];
        if((sum / k) >= threshold) ans++;
    }

    return ans;
};
```



