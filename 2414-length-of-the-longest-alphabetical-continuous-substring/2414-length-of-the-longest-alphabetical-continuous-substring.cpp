class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int count=1;
        int mx = 1;
        int n = s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]+1 == s[i+1]) count++;                    // checking the sequentional Alphabetical Continuous Substring
            else count = 1;
            
            mx = max(mx,count);                              // each time find max of count and mx
        }
        return mx;
        
    }
};