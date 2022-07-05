class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftS = 0, rightS = 0;
        int sum = 0;
        for(int i = 0; i<n; i++)
        {
            sum += nums[i];
        }
        
        for(int i =0; i<n; i++)
        {
            rightS = sum - nums[i] - leftS;
            
            if(rightS == leftS)
                return i;
            
            leftS += nums[i];
        }
        
        return -1;
        
        // return 3;
    }
};