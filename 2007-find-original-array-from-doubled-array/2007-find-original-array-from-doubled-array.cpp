class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int n = changed.size();
        
        vector<int> ans;
        
        if(n&1){
            return {};
        }
        
        
        unordered_map<int, int> mp;
        for (int a : changed) 
            mp[a]++;
        
        
        vector<int> keys;
        for (auto it : mp)
            keys.push_back(it.first);
        
       
        
        sort(keys.begin(), keys.end(), [](int i, int j) {return abs(i) < abs(j);});
        
        //  for(auto it:keys){
        //     cout<<it<<" ";
        // }
        
        for (int x : keys) {
            cout<<x<<endl;
            if (mp[x] > mp[2 * x]) return {};
            for (int i = 0; i < mp[x]; ++i, mp[2 * x]--)
                ans.push_back(x);
        }
       
        return ans;
            
    }
};