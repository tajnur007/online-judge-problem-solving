
# JavaScript Solution

```JS
/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let ans = 0;

    accounts.forEach(account => {
        let sum = 0;

        account.forEach(num => {
            sum = sum + num;
        });
        
        if(sum > ans) {
            ans = sum;
        }
    });

    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    int getTotal(vector<int>& vec) {
        int sum = 0;
        for(auto& v : vec) sum += v;
        return sum;
    }
    
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue = 0;
        
        for(auto& row : accounts) 
            maxValue = max(maxValue, getTotal(row));
        
        return maxValue;
    }
};
```
