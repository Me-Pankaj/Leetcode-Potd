class Solution {
    public List<Integer> addToArrayForm(int[] a, int k) {
        List<Integer>ans=new ArrayList<>();
        String x=""+k;
        // System.out.prin(ans);
        
        int i=a.length-1;
        int j=x.length()-1;
        int carry=0;
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=a[i];
                i--;
            }
            if(j>=0)
            {
                sum+=x.charAt(j)-'0';
                j--;
            }
            ans.add(sum%10);
            carry=sum/10;
        }
        if(carry!=0) ans.add(carry);
        Collections.reverse(ans);
        return ans;
    }
}