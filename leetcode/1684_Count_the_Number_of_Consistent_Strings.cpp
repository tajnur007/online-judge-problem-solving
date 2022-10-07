class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> check(123);
        short len = words.size();
        short ans = len;

        for(auto ch : allowed) check[ch] = true;

        for(short i = 0; i < len; i++) {
            for(auto ch : words[i]) {
                if(!check[ch]) {
                    ans--;
                    break;
                }
            }
        }

        return (int)(ans);
    }
};
