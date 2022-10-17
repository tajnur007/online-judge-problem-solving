class Solution {
public:
    int findNumbers(vector<int>& nums) {
        short ans = 0;
        
        for(auto& num : nums)
            if((num > 9 && num < 100) || (num > 999 && num < 10000) || (num == 100000)) ans++;

        return ans;
    }
};
