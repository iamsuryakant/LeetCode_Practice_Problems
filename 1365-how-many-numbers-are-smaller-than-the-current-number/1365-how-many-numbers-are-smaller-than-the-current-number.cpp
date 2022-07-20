class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        // int count

        for(int i = 0; i<n; i++)
        {
            int j = 0;
            int count = 0;

            while(j < n){
                if(nums[i] > nums[j]){
                    count++;
                }

                j++;
            }
            ans[i] = count;
        }

        return ans;
    }
};