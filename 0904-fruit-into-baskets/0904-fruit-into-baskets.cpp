class Solution {
public:
    int totalFruit(vector<int>& a) {
        int i=0,j=0;
        int ans=0;
        int n=a.size();
        map<int,int>m;
        while(i<n)
        {
            m[a[i]]++;
            while(m.size()>2)
            {
                m[a[j]]--;
                if(m[a[j]]==0)
                    m.erase(a[j]);
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};