class Solution {
public:
    
    bool issub(string t, string s)
    {
        int j = 0;
        int cnt = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == t[j])
            {
                j++;
                cnt++;
            }
            
            if(cnt == t.length())
            {
                return true;
                break;
            }
        }
        
        return false;
    }
    
    
    
    
    int numMatchingSubseq(string s, vector<string>& words) {
        
        int ans  = 0;
        
        unordered_map<string, int> mp;
        
        for(int i = 0; i<words.size(); i++)
        {
            mp[words[i]]++;
        }
        
        for(auto x:mp)
        {
            if(issub(x.first, s))
            {
                ans += x.second;
            }
        }
        
        return ans;
    }
};