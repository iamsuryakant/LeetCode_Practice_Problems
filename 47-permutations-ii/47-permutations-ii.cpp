class Solution {
public:
    
    void permute(int idx, int n, vector<int>&arr, vector<vector<int>>&ans)
    {
        if (idx == n)
        {
            ans.push_back(arr);
            return;
        }

        for (int i = idx; i < n; i++)
        {
            swap(arr[idx], arr[i]);
            permute(idx + 1, n, arr, ans);
            swap(arr[idx], arr[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        permute(0, n, nums, ans);
        
        sort(ans.begin(), ans.end());
        
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        
        return ans;
    }
};