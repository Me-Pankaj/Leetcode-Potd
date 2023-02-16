class Solution {
public:
    int countCharacters(vector<string>& s, string tar) {
        map<char,int>m;
        for(auto i:tar) m[i]++;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            map<char,int>mp;
            string x=s[i];
            int f=0;
            for(auto j:s[i])
                mp[j]++;
            for(int j=0;j<s[i].size();j++)
            {
                if(m[x[j]]<mp[x[j]])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                ans+=x.size();
                
        }
        return ans;
    }
};