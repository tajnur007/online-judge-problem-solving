class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        short maxWord = 0;
        
        for(auto& sentence : sentences){
            short x = count(sentence.begin(), sentence.end(), ' ');
            maxWord = max(maxWord, x);
        }
        
        return maxWord + 1;
    }
};
