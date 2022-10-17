class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0, len = pref.size();

        for(auto word : words)
            if(word.substr(0, len) == pref) ans++;

        return ans;
    }
};
