
# JavaScript Solution

```JS
var finalValueAfterOperations = function(operations) {
    let ans = 0;
    let len = operations.length;

    while(len--) {
        if(operations[len] === 'X++' || operations[len] === '++X') {
            ans++;
        } else {
            ans--;
        }
    }

    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        short x = 0;
        for(auto s : operations) {
            if((s == "X++") || (s == "++X")) x++;
            else x--;
        }
        
        return x;
    }
};
```
