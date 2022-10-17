
# JavaScript Solution

```JS
/**
 * @param {string[][]} items
 * @param {string} ruleKey
 * @param {string} ruleValue
 * @return {number}
 */
var countMatches = function(items, ruleKey, ruleValue) {
    let index = 2, ans = 0;

    if(ruleKey === 'type') {
        index = 0;
    } else if(ruleKey === 'color') {
        index = 1;
    }

    items.forEach(item => {
        if(item[index] === ruleValue) {
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
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        short index = 2, ans = 0;
        
        if(ruleKey == "color") index = 1;
        else if(ruleKey == "type") index = 0;
        
        for(auto& v : items){
            if(v[index] == ruleValue)
                ans++;
        }
        
        return ans;
    }
};
```
