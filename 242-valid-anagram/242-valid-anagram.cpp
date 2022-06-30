class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        if(n != m){
            return false;
        }
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         return (s == t);
        int count[256] = {0};
        
        for(int i = 0; i<n; i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        
        for(int i = 0; i<256; i++)
        {
            if(count[i] != 0)
                return false;
        }
        
        return true;
    }
};