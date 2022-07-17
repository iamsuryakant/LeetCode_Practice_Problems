class Solution {
public:
    
    int sum_of_digit(int n)
    {   
        long sum = 0;
        
        while(n != 0)
        {
            sum += n%10;
            n = n/10;
        }
        
        return sum;
    }
    
    
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        int ans = -1, ans1 = 0, ans2 = 0;
        int maxi=-1e9;
        for (int i = 0; i < n; i++) {

            int temp = sum_of_digit(nums[i]);

            if (mp[temp] != 0) {
                if (nums[i] + mp[temp] > ans) {
                    ans1 = nums[i];
                    ans2 = mp[temp];
                    ans = ans1 + ans2;
                }
            }

            mp[temp] = max(nums[i], mp[temp]);
        }
        
        maxi=max(maxi,ans);
        
        if(maxi == -1e9)
            return -1;
        
        return maxi;
        
    }
};