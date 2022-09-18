class Solution {
public:
    int maxPower(string s) {
        
        int countCo = 1, mx = 1;
        int n  = s.length();
        
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1])
            {
                countCo++;
            }else{
                countCo = 1;
            }
            
            mx = max(mx, countCo);
        }
        
        return mx;
    }
};