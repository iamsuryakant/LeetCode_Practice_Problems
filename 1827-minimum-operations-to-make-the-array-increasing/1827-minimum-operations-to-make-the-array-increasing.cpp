class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        
        
        if(n < 2)
        {
            return 0;
        }
        int count = 0;
        for(int i = 1; i<n; i++){
            
           if(nums[i]<=nums[i-1]){
               int k=nums[i-1]-nums[i]+1;
               count+=k;
               nums[i]+=k;
           }
           
        }
        
        
        return count;
    }
};