class Solution {
public:
    int maximumGroups(vector<int>& a) {
        int n=a.size();
        return ((-1+sqrt(1+8*n))/2);
    }
};