class Solution {
public:
    
    int ans=0;
    void solve(int curr,vector<vector<int>>& adj, vector<int>& vis)
    {
        vis[curr]=1;
        ans++;
        for(auto i:adj[curr])
        {
            if(vis[i]==0)
                solve(i,adj,vis);
        }
        return;
    }
    
    
    int reachableNodes(int n, vector<vector<int>>& a, vector<int>& res) {
        vector<int>vis(n,0);
        for(int i=0;i<res.size();i++)
            vis[res[i]]++;
        vector<vector<int>>adj(n);
        for(int i=0;i<n-1;i++)
        {
            adj[a[i][0]].push_back(a[i][1]);
            adj[a[i][1]].push_back(a[i][0]);
        }
        
        solve(0,adj,vis);
        return ans;
    }
};