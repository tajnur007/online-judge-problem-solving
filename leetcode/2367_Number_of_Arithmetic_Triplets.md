
# JavaScript Solution

```JS
/**
 * @param {number[]} nums
 * @param {number} diff
 * @return {number}
 */
var arithmeticTriplets = function(nums, diff) {
    let ans = 0;
    let obj = {};
    nums.forEach((num, i) => obj[num] = i);
    nums.forEach((num, i) => {
        if(obj[num + diff] && obj[num + diff + diff] && obj[num + diff] > i && obj[num + diff + diff] > obj[num + diff]) {
            ans++;
        }
    });
    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        vector<bool> vec(201);

        for(auto& n : nums)
            vec[n] = true;

        for(auto& n : nums) {
            if((n - diff > -1) && (n + diff < 201))
                if(vec[n - diff] && vec[n + diff])
                    ans++;
        }

        return ans;
    }
};
```




