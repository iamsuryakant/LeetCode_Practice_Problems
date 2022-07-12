class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0)
            return 0;
        
        int maxSubpro = nums[0], maxEndhere = nums[0], minEndhere = nums[0];
        
        for(int i = 1; i<n; i++)
        {
            if(nums[i] > 0)
            {
                maxEndhere = max(maxEndhere*nums[i], nums[i]);
                minEndhere = min(minEndhere*nums[i], nums[i]);
            }else if(nums[i] < 0)
            {
                int temp = maxEndhere;
                
                maxEndhere = max(minEndhere*nums[i], nums[i]);
                minEndhere = min(temp*nums[i], nums[i]);
            }else{
                maxEndhere = 0;
                minEndhere = 0;
            }
            
            maxSubpro = max(maxEndhere, maxSubpro);
        }
        
        return maxSubpro;
    }
};