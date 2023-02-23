class Solution {
public:
    int minimumCardPickup(vector<int>& a) {
        map<int,int>m;
        int ans=INT_MAX;
        for(int i=0;i<a.size();i++)
            {
                if(m.find(a[i])!=m.end())
                {
                    ans=min(ans,i-m[a[i]]+1);
                }
                m[a[i]]=i;
            }
        if(ans==INT_MAX) return -1;
            return ans;
            }
};