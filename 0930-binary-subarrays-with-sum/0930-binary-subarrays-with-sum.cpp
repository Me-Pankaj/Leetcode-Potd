class Solution {
public:
    int numSubarraysWithSum(vector<int>& a, int tar) {
        int j=0,ans=0,sum=0;
        int n=a.size();
        map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(m.find(sum-tar)!=m.end())
            {
                ans+=m[sum-tar];
            }
            m[sum]++;
        }
        return ans;
    }
};