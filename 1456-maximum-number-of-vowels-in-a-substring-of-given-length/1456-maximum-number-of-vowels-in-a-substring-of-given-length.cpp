class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int c=0,ans=0;
        for(int i=0;i<k;i++)
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c++;
        ans=max(c,ans);
        int i=0,j=k;
        while(j<n)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') c++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c--;
            ans=max(c,ans);
            j++;
            i++;
        }
        return ans;
    }
};