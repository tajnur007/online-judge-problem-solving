
# JavaScript Solution

### Approach 1: Normal Process

```JS
/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    let ans = 0;

    for(let i = 0; i < nums.length - 1; i++) {
        for(let j = i + 1; j < nums.length; j++) {
            if(nums[i] === nums[j]) {
                ans++;
            }
        }
    }

    return ans;
};
```

### Approach 2: Best Process

```JS
/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    nums.sort();
    let ans = 0, cnt = 0;

    for(let i = 1; i < nums.length; i++) {
        if((nums[i] !== nums[i - 1])) {
            // 1 + 2 + 3 + ...... + n = n(n + 1) / 2
            ans = ans + ((cnt*cnt + cnt) / 2);
            cnt = 0;
        } else {
            cnt++;
        }
    }
    
    ans = ans + ((cnt*cnt + cnt) / 2);

    return ans;
};

```



# C++ Solution

```C++
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        short ans = 0, i, index = 0;
        
        for(i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                short n = (i - index - 1);
                ans += (short)((n * n + n) / 2);
                index = i;
            }
        }
        short n = (i - index - 1);
        ans += (short)((n * n + n) / 2);
        
        return ans;
    }
};
```
