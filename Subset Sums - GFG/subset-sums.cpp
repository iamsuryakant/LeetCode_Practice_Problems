class Solution
{
public:

void sum(int ind, vector<int>&arr, vector<int>&ans, vector<int>&ds)
{
    if(ind == arr.size())
    {
        int sum = 0;
        for(auto it:ds)
        {
            sum += it;
        }
        
        ans.push_back(sum);
        
        // if(ds.size() == 0)
        // {
        //     sum = 0;
            
        //     ans.push_back(sum);
        // }
        return;
    }
    
    //not picking
    
    sum(ind+1, arr, ans, ds);
    
    //picking condition
    
    ds.push_back(arr[ind]);
    
    sum(ind+1, arr, ans, ds);
    
    ds.pop_back();

}
    
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>ds;
        
        sum(0, arr, ans, ds);
        
        return ans;
    }
};
