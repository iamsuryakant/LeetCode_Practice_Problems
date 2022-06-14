class Solution {
public:
     int mini(string s1, string s2, int n, int m, 
            vector<vector<int>>&dp){
        
        if(n == 0)
            return m;
        
        if(m == 0)
            return n;
        
        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }
        
        if(s1[n-1] == s2[m-1])
        {
            return dp[n][m] = mini(s1, s2, n-1, m-1, dp);
        }
        
        return dp[n][m] = 1+min(mini(s1, s2, n-1, m, dp), 
                                min(mini(s1, s2, n, m-1, dp),
                               mini(s1, s2, n-1, m-1, dp)));
        
    }
    
    
    
    int minDistance(string word1, string word2) {
        
        int n = word1.length();
        int m = word2.length();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return mini(word1, word2, n, m, dp);
        
    }
};