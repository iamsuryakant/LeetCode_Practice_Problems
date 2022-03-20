class Solution {
public:
    void combination(int ind, int target, vector<int>&arr,
                    vector<vector<int>>&ans, vector<int>&ds)
    {
        if(ind == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        //picking the element
        
        if(arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            combination(ind, target-arr[ind], arr, ans, ds);
            ds.pop_back();
        }
        
        //not picking the element
        
        combination(ind+1, target, arr, ans, ds);
        
    }
    
    
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        combination(0, target, candidates, ans, ds);
        
        return ans;
    }
};