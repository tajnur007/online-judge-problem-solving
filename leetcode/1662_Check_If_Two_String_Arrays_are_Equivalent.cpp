class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int firstLen = word1.size(), secondLen = word2.size();
        int maxLen = max(firstLen, secondLen);
        string firstWord = "", secondWord = "";

        for(int i = 0; i < maxLen; i++) {
            if(i < firstLen) {
                firstWord += word1[i];
            }
            if(i < secondLen) {
                secondWord += word2[i];
            }
        }

        return (firstWord == secondWord ? true : false);
    }
};
