class Solution {
public:
    long long countVowels(string word) {
        long long int ans = 0,k=0;
        for(int i = 0; i < word.length(); i++){
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                k += (i+1);
                ans = ans+k;
            }else{
                ans = ans+k;
            }
            // cout<<ans<<" ";
        }
        return ans;
    }
};