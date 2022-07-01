class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n <= 2)
            return true;
        //bool flag = false;
        //int count =0;
        for(int i = 1, count = 0;i<n; i++)
        {
            if(nums[i] < nums[i-1]){
                count++;
                if(count > 1 || (i > 1 && i<n-1) &&
                   (nums[i-2] > nums[i]) && (nums[i+1] < nums[i-1]) ){
                    return false;
                }
            }
        }
        return true;
       
    }
};