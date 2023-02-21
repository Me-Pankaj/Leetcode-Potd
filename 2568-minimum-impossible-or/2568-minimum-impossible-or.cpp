class Solution {
public:
    int minImpossibleOR(vector<int>& a) {
        int n=a.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
            m[a[i]]++;
        int x=1;
        while(m[x])
            x=x*2;
        return x;
    }
};