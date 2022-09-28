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
