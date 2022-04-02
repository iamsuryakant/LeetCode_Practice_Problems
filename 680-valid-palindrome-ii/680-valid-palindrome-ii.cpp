class Solution {
    
public:
    bool isPali(string s, int st, int end)
    {
        // int st = 0, end = s.length();
        
        while(st < end)
        {
            if(s[st] != s[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.length()-1;
        
        while(l < r){
            if(s[l] != s[r])
            {
                if(isPali(s, l, r-1))
                {
                    return true;
                }
                
                if(isPali(s, l+1, r)){
                    return true;
                }
                
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};