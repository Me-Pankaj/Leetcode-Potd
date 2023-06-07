class Solution {
public:
    bool canJump(vector<int>& a) {
        int n=a.size()-1;
        for(int i=n-1;i>=0;i--){
            if(i+a[i]>=n){
                n=i;
            }
        }
        if(n==0) return true;
        return false;
    }
};