class Solution {
public:
    string generateMorseCode(string& word) {
        string MorseCode[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string code = "";

        for(auto ch : word)
            code += MorseCode[ch - 'a'];

        return code;
    }

    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,bool> mp;
        short count = 0;

        for(auto& word : words){
            string morseCode = generateMorseCode(word);

            if(!(mp[morseCode])) {
                count++;
                mp[morseCode] = true;
            }
        }

        return count;
    }
};
