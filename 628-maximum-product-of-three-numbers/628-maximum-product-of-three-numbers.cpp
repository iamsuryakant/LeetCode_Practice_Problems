class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> temp = nums;
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        sort(temp.begin(), temp.end());
        
        int maxi = 1;
        
        maxi = (nums[0]*nums[1]*nums[2]);
        
        int max2 = 1;
        
        max2 *= (temp[0]*temp[1]*temp[n-1]);
        
        return max(maxi, max2);
        
    }
};