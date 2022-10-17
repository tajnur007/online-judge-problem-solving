class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int half = (int)(n / 2) + 1;

        if(n % 2) {
            ans.push_back(0);
            while(--half) {
                ans.push_back(half);
                ans.push_back(-half);
            }
        }
        else {
            while(--half) {
                ans.push_back(half);
                ans.push_back(-half);
            }
        }

        return ans;
    }
};
