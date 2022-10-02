class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size() - 2);
        
        for(int i = 0; i < grid.size() - 2; i++) {
            for(int j = 0; j < grid[i].size() - 2; j++) {
                auto firstMax = max_element(grid[i].begin() + j, grid[i].begin() + j + 3);
                auto secondMax = max_element(grid[i + 1].begin() + j, grid[i + 1].begin() + j + 3);
                auto thirdMax = max_element(grid[i + 2].begin() + j, grid[i + 2].begin() + j + 3);
                int maxElement = max(*firstMax, max(*secondMax, *thirdMax));
                ans[i].push_back(maxElement);
            }
        }
        
        return ans;
    }
};
