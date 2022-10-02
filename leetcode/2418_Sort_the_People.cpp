class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,int>> vp;
        vector<string> ans;
        short n = heights.size();

        for(short i = 0; i < n; i++)
            vp.push_back({heights[i], i});

        sort(vp.rbegin(), vp.rend());
        for(auto& v : vp) 
            ans.push_back(names[v.second]);

        return ans;
    }
};
