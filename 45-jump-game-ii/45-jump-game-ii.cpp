class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

        vector<int>dp(n, -1);

        dp[n - 1] = 0;


        for (int i = n - 2; i >= 0; i--)
        {
            int steps = nums[i];

            int min = INT_MAX;
            for (int j = 1; j <= steps && (i + j) < n; j++) {
                if (dp[i + j] != -1 && dp[i + j] < min) {
                    min = dp[i + j];
                }
            }

            if (min != INT_MAX) {
                dp[i] = min + 1;
            }
        }

        return dp[0];

    }
};