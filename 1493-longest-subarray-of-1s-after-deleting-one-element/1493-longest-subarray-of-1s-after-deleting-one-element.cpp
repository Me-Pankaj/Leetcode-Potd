class Solution {
public:
    int longestSubarray(vector<int>& a) {
        int n=a.size();
        int c=0,ans=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) c++;
            while(c>1)
            {
                if(a[j]==0) c--;
                j++;
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};