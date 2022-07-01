class Solution {
public:
    
    //bool comp()
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(begin(boxTypes), end(boxTypes),
             [](auto& a, auto& b){ 
                 return a[1] > b[1];});
        int ans = 0;
        for(auto &box: boxTypes){
            if(truckSize <= 0){
                break;
            }
            
            ans += min(truckSize, box[0])*box[1];
            
            truckSize -= box[0];
            
        }
        
        return ans;
        
    }
};