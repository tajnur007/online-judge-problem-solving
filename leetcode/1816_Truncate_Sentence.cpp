class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";

        for(auto ch : s) {
            if(ch == ' ') k--;
            if(!k) break;
            ans.push_back(ch);
        }

        return ans;
    }
};
