class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> v;
        
        for(int i=0; i<nums.size(); i++) {
            for(int j=0; j<nums[i].size(); j++) v.push_back({nums[i][j], i});
        }
        sort(v.begin(), v.end());
        
        int i = 0, j = 0;
        unordered_map<int, int> m;
        vector<int> ans = {-100000, 100000};
        
        while(j < v.size()) {
            m[v[j].second]++;
            
            while(m.size() == nums.size()) {
                if(v[j].first - v[i].first < ans[1] - ans[0]) ans = {v[i].first, v[j].first};
                
                m[v[i].second]--;
                if(!m[v[i].second]) m.erase(v[i].second);
                i++;
            }
            j++;
        }
        return ans;
    }
};