class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        int l = 0, r = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            r = sum - nums[i] - l;
            
            if(r == l)
                return i;
            
            l += nums[i];
        }
        
        return -1;
    }
};