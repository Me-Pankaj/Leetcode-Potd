class Solution {
public:
    int maximumUniqueSubarray(vector<int>& a) {
        int n=a.size();
        unordered_map<int,int>m;
        int i=0,j=0,ans=0,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            m[a[i]]++;
            while(m[a[i]]>1)
            {
                sum=sum-a[j];
                m[a[j]]--;
                // if(m[a[j]]==0) m.erase(a[j]);
                j++;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};