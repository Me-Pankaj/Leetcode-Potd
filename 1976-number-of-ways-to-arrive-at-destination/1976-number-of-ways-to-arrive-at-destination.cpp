class Solution {
public:
    int countPaths(int n, vector<vector<int>>& a) {
        vector<pair<long long,long long>>adj[202];
        for(auto i:a)
        {
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
        vector<long long>ways(n,0);
        vector<long long>dis(n,1e18);
        ways[0]=1;
        dis[0]=0;
        priority_queue <pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>> > pq;
        pq.push({0,0});
        long long mod=(long long)(1e9+7);
        while(!pq.empty())
        {
            long long dist=pq.top().first;
            long long node=pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                long long adjnode=it.first;
                long long edw=it.second;
                if(dist+edw <dis[adjnode])
                {
                    dis[adjnode]=dist+edw;
                    pq.push({edw+dist,adjnode});
                    ways[adjnode]=ways[node];
                }
                else if(edw+dist==dis[adjnode])
                {
                    ways[adjnode]=(ways[adjnode]+ways[node])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};