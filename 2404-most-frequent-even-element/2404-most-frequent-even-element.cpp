class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        int n = nums.size();
        int maxfreq = 0;
        int ans = 0;
        //bool flag = false;
        
        // int sum = accumulate(nums.begin(), nums.end(), 0);
        
        map<int, int> mp;
        
        for(auto x:nums){
            
            if(x%2 == 0){
                mp[x]++;
            }
            
            
        }
        
        
        if(mp.empty()) return -1;
        
        
        for(auto  m:mp ){
            
           if(m.second > maxfreq)
           {
               maxfreq = m.second;
               ans = m.first;
           }
        }
        
        
       return ans;
    }
};