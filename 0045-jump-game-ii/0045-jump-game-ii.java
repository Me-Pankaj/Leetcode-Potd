class Solution {
    public int jump(int[] a) {
        int n=a.length;
        int maxr=Integer.MIN_VALUE;
        int ans=0,curr=0;
        for(int i=0;i<n-1;i++)
        {
            maxr=Math.max(maxr,a[i]+i);
            if(curr==i)
            {
                ans++;
                curr=maxr;
            }
        }
        if(curr<n-1) return -1;
        return ans;
    }
}