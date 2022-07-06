class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n == 0)
            return 0;
        
        vector<int>dp(n+1);
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 1; i<=n/2; i++)
        {
            dp[2*i] = dp[i];
            
            if((2*i)+1 <=n){
                dp[(2*i)+1]=dp[i]+dp[i+1];
            }
            
        }
        
        int ans = 0;
    
        for(auto x:dp)
        {
            ans = max(ans, x);
        }
       
        return ans;
        
    }
};