class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        int n=a.size();
        map<int,int>m;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<k;i++){
             m[a[i]]++;
            sum+=a[i];
        }
        if(m.size()==k) ans=max(ans,sum);
        int i=0,j=k;
        while(j<n)
        {
            if(m[a[i]]==1) m.erase(a[i]);
            else m[a[i]]--;
            sum-=a[i++];
            m[a[j]]++;
            sum+=a[j++];
            if(m.size()==k) ans=max(ans,sum);
        }
        return ans;
    }
};