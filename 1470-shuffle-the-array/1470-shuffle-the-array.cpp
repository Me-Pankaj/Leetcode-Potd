class Solution {
public:
    vector<int> shuffle(vector<int>& a, int n) {
        int m=a.size();
        int i=0,j=n;
        vector<int>ans;
        while(i<m and j<m)
        {
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            j++;
            i++;
        }
        return ans;
    }
};