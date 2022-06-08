class Solution {
public:
    
    bool isPalindrom(string s) {
        int l = 0, r = s.length() - 1;

        while (l < r) {

            if (s[l] != s[r])
                return false;

            l++;
            r--;
        }

        return true;
    }

    
    
    int removePalindromeSub(string s) {
        
        if (isPalindrom(s)) return 1;
        return 2;
    }
};