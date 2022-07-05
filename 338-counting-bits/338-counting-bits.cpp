class Solution {
public:
    vector<int> countBits(int n) {
        
//         vector<int>ans;
        
//         for(int i = 0; i<=n;i++)
//         {
//             ans.push_back(__builtin_popcount(i));
//         }
        
//         return ans;
        
        vector<int> res(n+1, 0);
        for (int i = 1; i <= n; ++i) {
            res[i] = res[i >> 1] + (i & 1);
        }
        return res;
    }
};