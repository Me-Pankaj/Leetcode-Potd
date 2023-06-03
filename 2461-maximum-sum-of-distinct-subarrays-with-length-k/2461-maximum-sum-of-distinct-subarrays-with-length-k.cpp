class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        long long sum=0;
        long long ans=0;
        map<int,int>m;
        int j=0;
        for(int i=0;i<k;i++)
        {
            m[a[i]]++;
            sum+=a[i];
        }
        if(m.size()==k)   ans=max(ans,sum);
        for(int i=k;i<a.size();i++)
        {
            if(m[a[j]]==1)
                 m.erase(a[j]);
            else m[a[j]]--;
             sum-=a[j++];
            sum+=a[i];
            m[a[i]]++;
            if(m.size()==k)
            {
                ans=max(ans,sum);
                
            }
                 
        }
        return ans;
    }
};