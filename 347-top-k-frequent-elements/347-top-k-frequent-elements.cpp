class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>ans;
        
        unordered_map<int, int>mp;
        
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        for(auto it:mp){
            pq.push(make_pair(it.second, it.first));
            
            if(pq.size() > (int)mp.size() - k){
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};