



# C++ Solution

```C++
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<bool>> mat(m, vector<bool>(n));
        short ans = 0, maxLen = max(m, n);

        for(auto& indice : indices) {
            for(short i = 0; i < maxLen; i++) {
                // Column Increment
                if(i < m) {
                    mat[i][indice[1]] = !mat[i][indice[1]];
                    if(mat[i][indice[1]]) ans++;
                    else ans--;
                }

                // Row Increment
                if(i < n) {
                    mat[indice[0]][i] = !mat[indice[0]][i];
                    if(mat[indice[0]][i]) ans++;
                    else ans--;
                }
            }
        }

        return ans;
    }
};
```
