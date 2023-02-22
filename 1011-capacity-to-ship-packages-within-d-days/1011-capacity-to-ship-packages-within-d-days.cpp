class Solution {
public:
    int shipWithinDays(vector<int>& a, int day) {
        int n=a.size();
        int l=*max_element(a.begin(),a.end());
        int h=accumulate(a.begin(),a.end(),0);
        while(l<h)
        {
            int m=(l+h)/2;
            int cur=0,need=1;
            for(auto i:a)
            {
                if(cur+i>m)
                {
                    cur=0;
                    need++;
                }
                cur+=i;
            }
            if(need<=day)
                h=m;
            else
                l=m+1;
        }
        return l;
    }
};