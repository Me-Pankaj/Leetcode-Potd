class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int i=0,j=0,ans=0;
        int maxi=0;
        map<int,int>m;
        while(j<n)
        {
            m[s[j]]++;
            maxi=max(maxi,m[s[j]]);
            if((j-i+1)-maxi>k)
            {
                m[s[i]]--;
                maxi=max(maxi,m[s[i]]);
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};