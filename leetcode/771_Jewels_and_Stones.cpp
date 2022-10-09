class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> check(123);
        short ans = 0;
        
        for(auto ch : jewels) {
            check[ch] = true;
        }
        for(auto ch : stones) {
            if(check[ch]) ans++;
        }

        return ans;
    }
};
