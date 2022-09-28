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
