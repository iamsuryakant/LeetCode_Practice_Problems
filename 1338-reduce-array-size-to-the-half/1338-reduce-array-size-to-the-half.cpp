class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        
        map<int, int> mp;
        
        for(auto x: arr)
        {
            mp[x]++;
        }
        
        vector<int>temp;
        
        for(auto x: mp){
            temp.push_back(x.second);
        }
        
        sort(temp.begin(),temp.end());
        
        // for(auto x: temp)
        // {
        //     cout<<x<<" ";
        // }
        
        int sum = 0;
        int count = 0;
        for(int i = temp.size()-1; i>=0; i--)
        {
            sum += temp[i];
            count++;
            
            if(sum >= n/2){
                break;
            }
        }
        
        return count;
    }
};