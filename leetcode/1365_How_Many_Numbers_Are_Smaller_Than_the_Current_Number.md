
# JavaScript Solution

### Approach 1: Easy Process

```JS
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let ans = [];

    nums.forEach(num => {
        let cnt = 0;

        nums.forEach(tNum => {
            if(tNum < num) {
                cnt++;
            }
        });

        ans.push(cnt);
    });

    return ans;
};
```

### Approach 2: Advance Process

```JS
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function(nums) {
    let ans = [];
    let numsWithIndex = nums.map((num, index) => [num, index]);
    numsWithIndex.sort((a, b) => a[0] - b[0]);

    numsWithIndex.forEach((data, index) => {
        if((index === 0) || (numsWithIndex[index - 1][0] !== data[0])) {
            ans[data[1]] = index;
        } else {
            ans[data[1]] = ans[numsWithIndex[index - 1][1]];
        }
    });

    return ans;
};
```



# C++ Solution

```C++
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector< pair<short, short> > tempNums;
        short len = nums.size();
        vector<int> ans(len);
        
        for(short i = 0; i < len; i++)
            tempNums.push_back({nums[i], i});
        
        sort(tempNums.begin(), tempNums.end());
        
        for(short i = 0; i < len; i++) {
            if(i == 0) {
                ans[tempNums[i].second] = 0;
                continue;
            }
            if(tempNums[i].first != tempNums[i - 1].first)
                ans[tempNums[i].second] = i;
            else
                ans[tempNums[i].second] = ans[tempNums[i - 1].second];
        }
        
        return ans;
    }
};
```



