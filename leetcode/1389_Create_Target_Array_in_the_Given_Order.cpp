class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        
        for(short i = 0; i < index.size(); i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    }
};
