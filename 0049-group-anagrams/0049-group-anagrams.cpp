class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        map<string, vector<string>> mp;
        
        for(string st : strs)
        {
           string s = st;
            
           sort(s.begin(), s.end());
            
            mp[s].push_back(st);
            
        }
        
       // cout<<mp<<endl;
        
        for(auto x: mp){
            ans.push_back(x.second);
        }
        
        return ans;
        
    }
};