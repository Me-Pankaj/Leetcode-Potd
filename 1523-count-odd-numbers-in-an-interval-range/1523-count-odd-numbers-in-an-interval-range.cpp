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
        else {
            
            return 1+ abs(h-l)/2;
        }
        return -1;
    }
};