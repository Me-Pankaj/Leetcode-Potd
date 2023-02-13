class Solution {
public:
    int countOdds(int l, int h) {
        if(l%2==1 and h%2==1)
        {
            int x=l/2+1;
            int y=h/2+1;
            return y-x+1;
        }
        else if(l%2==0 and h%2==0)
        {
            return (h/2)-(l/2);
        }
        else if(l%2==0 and h%2==1)
        {
            int x=(l/2);
            int y=(h/2)+1;
            return y-x;
        }
        else
        {
            int x=(l/2)+1;
            int y=(h/2);
            return y-x+1;
        }
        return -1;
    }
};