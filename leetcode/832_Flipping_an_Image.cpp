class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& row : image) {
            for(auto& value : row) {
                value = value ? 0 : 1;
            }
            reverse(row.rbegin(), row.rend());
        }

        return image;
    }
};
