class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>ans;
        
        vector<int>count(n+1);
        
        for(auto x:nums){
            count[x]++;
        }
        
        // for(auto x:count){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        
        for(int i = 1; i<n+1; i++)
        {
            if(count[i] > 1){
                ans.push_back(i);
            }
        }
        
        
        return ans;
    }
};