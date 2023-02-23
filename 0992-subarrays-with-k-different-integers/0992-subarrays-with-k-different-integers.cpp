class Solution {
public:
    
    int solve(vector<int>&a,int k)
    {
        if(k<=0)return 0;
        int j=0;
        map<int,int>m;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]]++;
            while(m.size()>k and j<i)
            {
                m[a[j]]--;
                if(m[a[j]]==0) m.erase(a[j]);
                j++;
                
            }
            c+=(i-j+1);
        }
        return c;
    }
    
    int subarraysWithKDistinct(vector<int>& a, int k) {
        int x=solve(a,k)-solve(a,k-1);
        return x;
    }
};