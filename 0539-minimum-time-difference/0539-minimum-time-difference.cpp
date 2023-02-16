class Solution {
public:
    int findMinDifference(vector<string>& a) {
        int n=a.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int h=stoi(a[i].substr(0,2));
            int min=stoi(a[i].substr(3));
            v.push_back(h*60+min);
        }
        
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            ans=min(ans,v[i]-v[i-1]);
        }
        ans=min(ans,1440-v[n-1]+v[0]);
        return ans;
    }
};