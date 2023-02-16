class Solution {
public:
    int maxFreq(string s, int maxletter, int minsize, int maxSize) {
        int n=s.size();
        map<string,int>mp;
        map<char,int>m;
        string temp="";
        int c=0;
        int i=0,j=0;
        while(j<n)
        {
            temp+=s[j];
            m[s[j]]++;
            if(temp.size()==minsize)
            {
                if(m.size()<=maxletter)
                {
                    mp[temp]++;
                }
                i++;
                m[temp[0]]--;
                if(m[temp[0]]==0)
                    m.erase(temp[0]);
                temp.erase(temp.begin());
            }
            j++;
        }
        int ans=0;
        for(auto i:mp)
        {
            ans=max(ans,i.second);
        }
        return ans;
    }
};