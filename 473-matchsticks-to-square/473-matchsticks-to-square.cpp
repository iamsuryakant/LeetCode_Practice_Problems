class Solution {
public:
    
    bool solve(int ind, int n, int target, vector<int>& matchsticks, vector<int>&ds)
    {
        if(ind == n)
        {
            if(ds[0] == ds[1] && ds[1] == ds[2] && ds[2] == ds[3])
                return true;
            
            return false;
        }
        
        
        for(int i = 0; i<4; i++)
        {
            if (ds[i] + matchsticks[ind] > target){  
                continue;
            }
            int j = i - 1;  
            while (j>=0){
                if(ds[j] == ds[i]){
                    break;
                }
                
                j -= 1;
            }
            
            if(j != -1){
                continue;
            }
            
            ds[i] += matchsticks[ind];
            
            if(solve(ind+1, n, target, matchsticks, ds)){
                return true;
            }
            
            ds[i] -= matchsticks[ind];
        }
        
        return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
        int n = matchsticks.size();
        
        int sum = 0;
        for(int i = 0; i < n ; i++){
            sum += matchsticks[i];
        }
        
        int target = sum / 4;
        
        vector<int> ds(4, 0);
        
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());
        
        return solve(0, n, target, matchsticks, ds);
    }
};