
# JavaScript Solution

```JS
/**
 * @param {number[]} encoded
 * @param {number} first
 * @return {number[]}
 */
var decode = function(encoded, first) {
    let ans = [first];

    encoded.forEach((code, index) => ans.push(code ^ ans[index]));

    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        
        for(short i = 0; i < encoded.size(); i++) {
            ans.push_back(encoded[i] ^ ans[i]);
        }
        
        return ans;
    }
};
```




