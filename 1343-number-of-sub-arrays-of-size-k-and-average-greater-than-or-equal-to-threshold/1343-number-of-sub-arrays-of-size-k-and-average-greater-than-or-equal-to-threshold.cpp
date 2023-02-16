class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int avg) {
        int n=a.size();
        int c=0,sum=0;
        for(int i=0;i<k;i++)
            sum+=a[i];
        if(sum/k>=avg)
                c++;
        int j=0;
        for(int i=k;i<n;i++)
        {
            sum+=a[i]-a[j++];
            if(sum/k>=avg)
                c++;
        }
        return c;
    }
};