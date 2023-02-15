class Solution {
    public String addBinary(String a, String b) {
        String x=b;
        // System.out.prin(ans);
        String ans="";
        int i=a.length()-1;
        int j=x.length()-1;
        int carry=0;
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum=a.charAt(i)-'0'+sum;
                i--;
            }
            if(j>=0)
            {
                sum=x.charAt(j)-'0'+sum;
                j--;
            }
            int y=sum%2==1?1:0;
            ans=y+ans;
            carry=sum<=1?0:1;
        }
        if(carry!=0) ans=carry+ans;
        // StringBuilder temp=new StringBuilder(ans);
        // temp.reverse();
        return ans;
    }
}