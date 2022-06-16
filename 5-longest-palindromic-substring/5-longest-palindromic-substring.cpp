class Solution {
public:    
    string longestPalindrome(string s) {
        
        int n = s.length();
        if(n == 0)
            return "";
       // string s2 = reverse(s1.begin(), s1.end());
        string res = "";
        bool dp[n][n];
        
        memset(dp, false, sizeof(dp));
        
        for(int i = 0; i<n ; i++)
            dp[i][i] = true;
        
        res += s[0];
        
        for(int i = n-1; i>=0; i--)
        {
            for(int j = i+1; j<n; j++)
            {
                if(s[i] == s[j])
                {
                    if(j-i == 1 || dp[i+1][j-1])
                    {
                        dp[i][j] = true;
                        
                        if(res.size() < j-i+1)
                            res = s.substr(i, j-i+1);
                    }
                }
            }
        }
        return res;
        
        
    }
};