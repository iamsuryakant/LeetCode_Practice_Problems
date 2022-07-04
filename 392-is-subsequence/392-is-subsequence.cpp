class Solution {
public:
    bool isSub(int m, int n, string &s,  string &t) {
        
        if(m == 0)
            return true;
        
        if(n == 0)
            return false;
        
        if(s[m-1] == t[n-1])
            return isSub(m-1, n-1, s, t);
        
        return isSub(m, n-1, s, t);
        
    }
    
    
    bool isSubsequence(string s, string t) {
        
        int m = s.length();
        int n = t.length();
        
        return isSub(m, n, s, t);
    }
};