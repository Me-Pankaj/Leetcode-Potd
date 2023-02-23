class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int ans=0;
        
        vector<int>v(n,0);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            v[i]=sum;
        }
        if(n==k) return sum;
        int temp=0;
        for(int i=0;i<=k;i++)
        {
            int j=i+n-k-1;
          
            if(i==0) 
                temp=v[j];
            else
                temp=v[j]-v[i-1];
            ans=max(ans,sum-temp);
        }
        return ans;
    }
};