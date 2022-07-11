class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int mul = 1;
        int mul1 = 1;
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != 0)
            {
                 mul = mul * nums[i];
            }else{
                mul1 = mul1*nums[i];
                count++;
            }
           
        }
        
        
        //cout<<count<<" ";
        
        //cout<<mul;
        
        for(int i = 0; i<n; i++)
        {
            if(nums[i] == 0 && count == 1)
            {
                ans[i] = mul;
            }else if(!count) {
                 ans[i] = (mul/nums[i]);
            }else{
                ans[i] = mul1;
            }
           
        }
        
        return ans;
    }
};