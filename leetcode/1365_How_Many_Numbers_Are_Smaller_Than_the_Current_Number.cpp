class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector< pair<short, short> > tempNums;
        short len = nums.size();
        vector<int> ans(len);
        
        for(short i = 0; i < len; i++)
            tempNums.push_back({nums[i], i});
        
        sort(tempNums.begin(), tempNums.end());
        
        for(short i = 0; i < len; i++) {
            if(i == 0) {
                ans[tempNums[i].second] = 0;
                continue;
            }
            if(tempNums[i].first != tempNums[i - 1].first)
                ans[tempNums[i].second] = i;
            else
                ans[tempNums[i].second] = ans[tempNums[i - 1].second];
        }
        
        return ans;
    }
};
