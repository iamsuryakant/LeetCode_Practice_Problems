class Solution {
public:
    
    int solve(int ind, vector<int>& cost, vector<int>&dp ){
        
        if(ind < 0)
            return 0;
        
        if(ind == 0)
            return cost[0];
        
        if(dp[ind] != -1)
            return dp[ind];
        
        
        int cost1 = solve(ind - 1, cost, dp);
        int cost2 = solve(ind - 2, cost, dp);
                     
                      
        return dp[ind] = (cost[ind] + min(cost1, cost2));
        
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        vector<int>dp(n, -1);
        
        return min(solve(n-1, cost, dp) , solve(n-2, cost, dp));
        
    }
};