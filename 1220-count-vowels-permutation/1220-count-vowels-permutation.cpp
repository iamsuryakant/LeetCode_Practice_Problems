class Solution {
public:
    int countVowelPermutation(int n) {
        const int mod = 1e9 + 7;
        
        long long int dp[n+1][5];
        
        for(int j = 0; j<5; j++)
        {
            dp[0][j] = 1;
        }
        
        for(int i = 1; i<n; i++)
        {
            dp[i][0] = (((dp[i-1][1] + dp[i-1][2])% mod) + dp[i-1][4])%mod;
            dp[i][1] = ((dp[i-1][0] + dp[i-1][2]))%mod;
            dp[i][2]=(dp[i-1][1]+dp[i-1][3])%mod;
            dp[i][3]=(dp[i-1][2])%mod;
            dp[i][4]=(dp[i-1][2]+dp[i-1][3])%mod;
        }
        
        
        long long int ans = 0;
        for(int j=0;j<5;j++){
            ans=(ans+ dp[n-1][j])%mod;
        }
        return ans;
    }
};
