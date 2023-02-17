class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int n=a.size();
        int c=0,zero=0;
        int j=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                zero++;
            }
            if(zero>k)
            {
                while(zero>k)
                {
                    if(a[j]==0) zero--;
                    j++;
                }
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};