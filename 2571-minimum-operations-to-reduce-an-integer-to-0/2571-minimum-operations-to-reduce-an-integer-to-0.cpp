class Solution {
public:
    int minOperations(int n) {
        // power of 2 less than or equal to n
        int p = log2(n);
        
        // Base Case:- If n is already a power of 2
        if((1 << p) == n) return 1;
        
        // getting next power of 2
        int np = p + 1;
        
        // number to be subtracted for going previous power of 2
        int diff1 = n - (1 << p);

        // number to be subtracted for going previous power of 2        
        int diff2 = (1 << np) - n;
        
        // getting min of two above possible outcomes
        return 1 + min(minOperations(diff1), minOperations(diff2));
    }
};