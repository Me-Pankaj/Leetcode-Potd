class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans=0;
        int n=s.size();
        if(n<3) return 0;
        char a=s[0],b=s[1],c=s[2];
        for(int i=3;i<n;i++)
        {
            if(a!=b and b!=c and c!=a) ans++;
            a=b;
            b=c;
            c=s[i];
        }
        if(a!=b and b!=c and c!=a) ans++;
        return ans;
    }
};