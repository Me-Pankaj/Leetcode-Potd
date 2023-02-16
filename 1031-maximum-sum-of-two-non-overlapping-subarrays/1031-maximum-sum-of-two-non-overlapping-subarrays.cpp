class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& a, int x, int y) {
        int sum=0;
        int n=a.size();
        int dp1[n];
        int dp2[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i<x)
            {
                sum+=a[i];
                dp1[i]=sum;
            }
            else
            {
                sum+=a[i]-a[i-x];
                dp1[i]=max(dp1[i-1],sum);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i+y>=n)
            {
                sum+=a[i];
                dp2[i]=sum;
            }
            else
            {
                sum+=a[i]-a[i+y];
                dp2[i]=max(dp2[i+1],sum);
            }
        }
        
        for(int i=x-1;i<n-y;i++)
        {
            ans=max(ans,dp1[i]+dp2[i+1]);
        }
        
        
        // ------------------------------
        
        dp1[n];
        dp2[n];
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(i<y)
            {
                sum+=a[i];
                dp1[i]=sum;
            }
            else
            {
                sum+=a[i]-a[i-y];
                dp1[i]=max(dp1[i-1],sum);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i+x>=n)
            {
                sum+=a[i];
                dp2[i]=sum;
            }
            else
            {
                sum+=a[i]-a[i+x];
                dp2[i]=max(dp2[i+1],sum);
            }
        }
        
        for(int i=y-1;i<n-x;i++)
        {
            ans=max(ans,dp1[i]+dp2[i+1]);
        }
        return ans;
    }
};