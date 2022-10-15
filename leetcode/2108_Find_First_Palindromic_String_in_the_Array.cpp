


# C++ Solution

### Approach 1
```C++
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto& word : words) {
            string tempStr = word;
            reverse(begin(tempStr), end(tempStr));
            if(word == tempStr) return word;
        }

        return "";
    }
};
```

### Approach 2 (Best)
```C++
class Solution {
public:
    bool isPalin(string& word) {
        short left = 0, right = word.size() - 1;

        while(left < right) {
            if(word[left] != word[right]) 
                return false;
            left++; right--;
        }

        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for(auto& word : words) 
            if(isPalin(word)) return word;

        return "";
    }
};
```


