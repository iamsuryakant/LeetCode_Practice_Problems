class Solution {
public:
    
    bool check(string s,string t){
        int count=0;
        int j=0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[j])
            {
                j++;
                count++;
            }
            if(count==s.size())
        {
            return true;
                break;
        }
        }
        
        return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        for(auto x:m)
        {
            if(check(x.first,s))
                ans+=x.second;
        }
        return ans;
    }
};