class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        if(n != m)
            return false;
        
        vector<char>ch1(256, 0),ch2(256, 0);
        
        int cnt1 = 1, cnt2 = 1;
        
        for(int i =0; i<n; i++)
        {
            if(ch1[s[i]] == 0 ){
                ch1[s[i]] = cnt1++;
            }
            
            if(ch2[t[i]] == 0)
            {
                ch2[t[i]] = cnt2++;
            }
           
            if(ch1[s[i]] != ch2[t[i]])
                return false;
        }
        
        return true;
        
    }
};



