class Bitset {
public:
    string s="";
    string flipped="";
    int n,c=0;
    Bitset(int size) {
        n=size;
        for(int i=0;i<size;i++)
        {
            s.push_back('0');
            flipped.push_back('1');
        }
    }
    
    void fix(int idx) {
        if(s[idx]=='0') c++;
        s[idx]='1';
        flipped[idx]='0';
    }
    
    void unfix(int idx) {
        if(s[idx]=='1') c--;
        s[idx]='0';
        flipped[idx]='1';
    }
    
    void flip() {
        swap(s,flipped);
        c=n-c;
    }
    
    bool all() {
        return c==n;
    }
    
    bool one() {
        return c>=1;
    }
    
    int count() {
        return c;
    }
    
    string toString() {
        return s;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */