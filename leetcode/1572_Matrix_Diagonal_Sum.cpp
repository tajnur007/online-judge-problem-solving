class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = size(mat[0]);
        int ans = 0, half = len / 2;

        for(int i = 0, j = len - 1; i < half; i++, j--) {
            ans += mat[i][i] + mat[j][j] + mat[i][j] + mat[j][i];
        }

        if(len % 2) {
            ans += mat[half][half];
        }

        return ans;
    }
};
