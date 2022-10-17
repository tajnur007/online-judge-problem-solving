
# JavaScript Solution

```JS
/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    let ans = [];

    indices.forEach((index, i) => {
        ans[index] = s[i];
    });

    return ans.join('');
};
```



# C++ Solution

```C++
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        
        for(short i = 0; i < s.size(); i++) {
            ans[indices[i]] = s[i];
        }
        
        return ans;
    }
};
```
