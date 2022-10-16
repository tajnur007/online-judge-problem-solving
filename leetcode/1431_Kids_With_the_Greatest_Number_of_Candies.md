
# JavaScript Solution

```JS
/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    const maxNum = Math.max(...candies);
    return candies.map(num => num + extraCandies < maxNum ? false : true);
};
```


# C++ Solution

```C++
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto it = max_element(candies.begin(), candies.end());
        vector<bool> ans;
        
        for(auto v : candies) {
            if((v + extraCandies) >= *it)
                ans.push_back(true);
            else 
                ans.push_back(false);
        }
        
        return ans;
    }
};
```



