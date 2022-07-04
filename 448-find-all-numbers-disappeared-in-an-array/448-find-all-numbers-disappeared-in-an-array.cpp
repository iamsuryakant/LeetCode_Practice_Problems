class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int>ans;
        int n  = nums.size();
        
        int miss = 1;
        
        set<int>st;
        
        for(auto x:nums){
            st.insert(x);
        }
        
        vector<int>count(n+1);
        
        for(auto x:st){
            count[x]++;
        }
        
        // for(auto x:count){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        
        
        for(int i = 1; i<n+1; i++)
        {
            if(count[i] != 1)
            {
                ans.push_back(i);
            }
        }
        
        
        return ans;
    }
};