class Solution {
public:
    int getTotal(vector<int>& vec) {
        int sum = 0;
        for(auto& v : vec) sum += v;
        return sum;
    }
    
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue = 0;
        
        for(auto& row : accounts) 
            maxValue = max(maxValue, getTotal(row));
        
        return maxValue;
    }
};
