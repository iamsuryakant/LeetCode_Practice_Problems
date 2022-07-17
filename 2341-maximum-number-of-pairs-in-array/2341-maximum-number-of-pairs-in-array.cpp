class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;
        
       // sort(nums.begin(), nums.end());
        
        if(n == 1)
        {
            ans.push_back(0);
            ans.push_back(1);
        }else{
        
            unordered_map<int, int> mp;

            for(auto x: nums)
                mp[x]++;

            int count = 0, nums_count = 0;
            for(auto x:mp)
            {
                if(x.second == 1)
                {
                    count += 0;
                    nums_count += 1;
                    
                }else if (x.second == 2)
                {
                    count++;
                }else
                {
                    if(x.second % 2 != 0)
                    {
                        nums_count += 1;
                    }
                    count += x.second/2;
                }

            }
            ans.push_back(count);
            ans.push_back(nums_count);
            
        }
        return ans;
    }
};