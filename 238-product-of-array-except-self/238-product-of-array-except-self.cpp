class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>ans(n);
//         int mul = 1;
//         int mul1 = 1;
//         int count = 0;
        
//         for(int i = 0; i < n; i++)
//         {
//             if(nums[i] != 0)
//             {
//                  mul = mul * nums[i];
//             }else{
//                 mul1 = mul1*nums[i];
//                 count++;
//             }
           
//         }
        
        
//         //cout<<count<<" ";
        
//         //cout<<mul;
        
//         for(int i = 0; i<n; i++)
//         {
//             if(nums[i] == 0 && count == 1)
//             {
//                 ans[i] = mul;
//             }else if(!count) {
//                  ans[i] = (mul/nums[i]);
//             }else{
//                 ans[i] = mul1;
//             }
           
//         }
        
//         return ans;
        
        vector<int> pre(nums), suf(nums), ans(size(nums));
        partial_sum(begin(pre), end(pre), begin(pre), multiplies<int>());       // calculates & stores prefix product at each index
        partial_sum(rbegin(suf), rend(suf), rbegin(suf), multiplies<int>());    // calculates & stores suffix product at each index
            
//             for(auto x:pre)
//             {
//                 cout<<x<<" ";
//             }
//             cout<<endl;
            
//             for(auto x:suf){
//                 cout<<x<<" ";
//             }
            
            // cout<<endl;
        for(int i = 0; i < size(nums); i++)
            ans[i] = (i ? pre[i-1] : 1) * (i+1 < size(nums) ? suf[i+1] : 1);
        
        
        return ans;
        
    }
};