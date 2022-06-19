class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        cout<<n<<endl;
        if(n == 1)
            return nums[0];
        
        int dp[n+1];
        
        
        
        dp[1] = nums[0];
        dp[2] = max(nums[0], nums[1]);
        
        for(int i = 3; i<=n; i++)
        {
            dp[i] = max(dp[i-1], dp[i-2]+nums[i-1]);
        }
        
        return dp[n];
    }
};