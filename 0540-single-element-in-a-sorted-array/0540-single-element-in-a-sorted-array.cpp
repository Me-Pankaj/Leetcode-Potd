class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        int x=0;
        for(int i=0;i<n;i++)
            x^=a[i];
        return x;
    }
};