class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%2;
            sum+=nums[i];
            if(m.find(sum-k)!=m.end())
                count+=m[sum-k];
            m[sum]++;
        }
        return count;
    }
};