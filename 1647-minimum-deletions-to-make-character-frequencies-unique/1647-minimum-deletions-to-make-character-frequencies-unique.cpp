class Solution {
public:
    int minDeletions(string s) {
        
        vector<int> freq(26);
        
        for(auto x: s){
            freq[x - 'a']++;
        }
        
        sort(freq.begin(), freq.end(), greater<int>());
        
       int allo_f = freq[0];
        int ans = 0;
        
        for(auto x:freq){
            if(x > allo_f){
                
                if(allo_f > 0){
                    ans += abs(x - allo_f);
                }else{
                    ans += x;
                }
            }
            
            allo_f = min(allo_f - 1, x-1);
        }
        
        return ans;
    }
};