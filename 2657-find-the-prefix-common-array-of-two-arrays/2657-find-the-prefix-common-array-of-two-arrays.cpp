class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int>s;
        vector<int>ans(A.size());
        for(int i=0;i<A.size();i++)
        {
            s.insert(A[i]);
            s.insert(B[i]);
            ans[i]=(i+1)*2 - s.size();
        }
        return ans;
    }
};