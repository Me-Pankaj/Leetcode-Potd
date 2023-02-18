class Solution {
public:
    int minimumRecolors(string s, int k) {
        int n=s.size();
        int i=0,j=0,ans=INT_MAX;
        map<char,int>m;
        m['W']=0; m['B']=0;
        while(j<n)
        {
            m[s[j]]++;
            if(j-i+1>=k)
            {
                
                ans=min(ans,m['W']);
                m[s[i]]--;
                i++;
            }
            j++;
        }
        return ans;
    }
};