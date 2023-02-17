class Solution {
public:
    int numberOfSubstrings(string s) {
       int i=0,j=0,ans=0;
       map<char,int>mp;
       int n=s.size();
       while(j<n){
           mp[s[j]]++;
           while(mp['a']>=1 &&mp['b']>=1 && mp['c']>=1 && i<=j){
               mp[s[i]]--;
               ans+=n-j;
               i++;
           }
           j++;
       }
       return ans;

    }
};