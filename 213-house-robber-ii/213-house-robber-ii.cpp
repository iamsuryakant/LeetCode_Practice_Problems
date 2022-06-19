class Solution {
public:
    int findMaxSum(vector<int> nums) {
    // code here
//         int n = nums.size();
//         int prev2 = 0;
//         int prev1 = nums[0];
        
//         for(int i = 1; i<n; i++)
//         {
//             int inc = prev2 + nums[i];
//             int ex = prev1;
            
//             int ans = max(inc, ex);
//             prev2 = prev1;
//             prev1 = ans;
//         }
        
//         return prev1;
        int n = nums.size();
        
        int dp[n+1];
        
        dp[0]=0;
        dp[1]=nums[0];
        
        for(int i=2;i<=n;i++)
            dp[i]=max(dp[i-2]+nums[i-1],dp[i-1]);

        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 1)
            return nums[0];
        
        vector<int>fir, sec;
        
        for(int i = 0; i<n; i++)
        {
            if(i != n-1)
                fir.push_back(nums[i]);
            
            if(i != 0)
                sec.push_back(nums[i]);
        }
        
        return max(findMaxSum(fir), findMaxSum(sec));
        
    }
};