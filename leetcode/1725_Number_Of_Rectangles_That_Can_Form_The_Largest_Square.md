


# C++ Solution

```C++
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> vec;

        for(auto rect : rectangles) 
            vec.push_back(min(rect[0], rect[1]));
        
        sort(vec.rbegin(), vec.rend());

        return count(vec.begin(), vec.end(), vec[0]);        
    }
};
```
