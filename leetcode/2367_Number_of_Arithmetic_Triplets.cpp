class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        vector<bool> vec(201);

        for(auto& n : nums)
            vec[n] = true;

        for(auto& n : nums) {
            if((n - diff > -1) && (n + diff < 201))
                if(vec[n - diff] && vec[n + diff])
                    ans++;
        }

        return ans;
    }
};
