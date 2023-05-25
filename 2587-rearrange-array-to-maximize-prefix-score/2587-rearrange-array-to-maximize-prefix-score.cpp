class Solution {
public:
    int maxScore(vector<int>& a) {
       sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        int ans=INT_MIN;
        long long sum=0;
        int c=0;
        for(int i=0;i<a.size();i++)
        {
        sum+=a[i];
            if(sum<0) break;
            if(sum>0)
            {
                // ans=sum;
                c++;
            }
            
        }
        return c;
    }
};