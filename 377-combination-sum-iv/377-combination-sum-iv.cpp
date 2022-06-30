class Solution {
public:
    
    int solve(vector<int>& nums, int target,vector<int>&dp){
        if(target < 0)
            return 0;
        
        if(target == 0)
            return 1;
        
        if(dp[target] != -1)
            return dp[target];
        
        int ans = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            ans += solve(nums, target-nums[i], dp);
        }
        
        return dp[target] = ans;
    }
    
    
    int combinationSum4(vector<int>& nums, int target) {
        //int ans = 0;
        
        vector<int>dp(target+1, -1);
        
        int ans = solve(nums, target, dp);
        
        return ans;
    }
};