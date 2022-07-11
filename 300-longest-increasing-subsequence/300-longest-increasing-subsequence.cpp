class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

            int n = nums.size();

            vector<int>dp(n, 0);

            dp[0] = 1;

            for (int i = 1; i < n; i++)
            {
                int max = 0;

                for (int j = 0; j < i; j++)
                {
                    if (nums[j] < nums[i])
                    {
                        if (dp[j] > max) {
                            max = dp[j];
                        }
                    }
                }

                dp[i] = max + 1;
            }


            return *max_element(dp.begin(), dp.end());
    }
};