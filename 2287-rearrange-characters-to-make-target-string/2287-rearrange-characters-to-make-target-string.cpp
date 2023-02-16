class Solution {
public:
    int rearrangeCharacters(string s, string tar) {
        int n=s.size();
        int ans=INT_MAX;
        map<char,int>m;
        map<char,int>st;
        for(auto i:tar) st[i]++;
        for(auto i:s) m[i]++;
        for(int i=0;i<tar.size();i++)
        {
            if(m.find(tar[i])==m.end())
                return 0;
            else
            {
                int x=m[tar[i]]/st[tar[i]];
                ans=min(ans,x);
            }
        }
        return ans;
    }
};