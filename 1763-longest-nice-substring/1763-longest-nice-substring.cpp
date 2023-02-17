class Solution {
public:
    
    bool solve(string s)
    {
        map<int,int>m;
        for(auto i:s) m[i]++;
        for(auto i:s)
        {
            if(i>=65 && i<=90 && m.find(i+32)==m.end())
                return false;
            else if(i>=97 && i<=122 && m.find(i-32)==m.end())
                return false;
        }
        return true;
    }
    
    
    string longestNiceSubstring(string s) {
        int n=s.size();
        int ans=0;
        string fi="";
        for(int i=0;i<n;i++)
        {
            string x="";
            for(int j=i;j<n;j++)
            {
                x+=s[j];
                // cout<<x<<" ";
                if(solve(x))
                {
                    int y=j-i+1;
                    if(y>ans)
                    {
                        ans=y;
                        fi=s.substr(i,ans);
                        
                    }
                }
            }
        }
        return fi;
    }
};