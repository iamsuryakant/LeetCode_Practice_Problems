class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        //int sum = accumulate(s.begin(), s.end(), 0);
        
        int count = 0;
        
        for(int i = 0; i<s.size(); i++)
        {
            if(count < g.size() && g[count] <= s[i])
            {
                count++;
            }
        }
        
        return count;
        
    }
};