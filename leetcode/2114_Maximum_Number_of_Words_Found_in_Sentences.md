
# JavaScript Solution

```JS
/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    let ans = 0;

    sentences.forEach(sentence => {
        ans = Math.max(ans, sentence.split(' ').length);
    });
    
    return ans;
};
```


# C++ Solution

```C++
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        short maxWord = 0;
        
        for(auto& sentence : sentences){
            short x = count(sentence.begin(), sentence.end(), ' ');
            maxWord = max(maxWord, x);
        }
        
        return maxWord + 1;
    }
};
```
