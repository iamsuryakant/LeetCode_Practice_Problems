class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        unordered_map<int, long long> mp;
        
        long long n = nums.size();
        
        for(int  i = 0; i<n; i++)
        {
            mp[nums[i] - i]++;
        
        }
        
       
        long long equal = 0;
        for(auto x:mp)
        {
            // cout<<x.second<<endl;
            equal += (x.second * (x.second - 1))/2;
        }
        
        // cout<<equal<<endl;
        
        //total pairs in array;
        
        long long total = (n*(n-1))/2;
        
        return (total - equal);
    }
};