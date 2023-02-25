class Solution {
public:
    int maxProfit(vector<int>& a) {
        int c=INT_MAX,n=a.size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<c)
                c=a[i];
            else if(p<a[i]-c)
                p=a[i]-c;
        }
        return p;
    }
};