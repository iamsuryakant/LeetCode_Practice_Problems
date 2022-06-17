class Solution {
public:
    
    int coinch(vector<int>&coins, int s,int n, vector<int>&dp)
    {
        if(s == 0)
            return 0;
        
        if(s < 0)
            return INT_MAX;
        
        if(dp[s] != -1)
        {
            return dp[s];
        }

        
        int minc = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            int ans = coinch(coins, s - coins[i], n, dp);
            
            if(ans != INT_MAX){
                minc = min(1+ans, minc);
            }
        }
        dp[s] = minc;
        
        return dp[s];
        
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        
        vector<int>dp(amount+1, -1);
        
        int ans = coinch(coins, amount, n, dp);
        
       if(ans == INT_MAX)
           return -1;
        
        return ans;
           
        
    }
};