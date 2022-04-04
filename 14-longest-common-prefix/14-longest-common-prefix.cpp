class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        
        string pre = "";
        
        if(n == 0)
            return pre;
        
        for(int j = 0; j<strs[0].size(); j++)
        {
            int i = 1;
            
            for(; i<n && strs[i].size() > j; i++){
                if(strs[i][j] != strs[0][j])
                    return pre;
            }
            if(i == n)
                pre += strs[0][j];
        }
        
        
        return pre;
        
    }
};