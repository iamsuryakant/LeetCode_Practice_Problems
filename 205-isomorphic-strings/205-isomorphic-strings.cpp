class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        if(n != m)
            return false;
        
        map<char, char> mp1;
        map<char,int>mp2;
        
        for(int i = 0; i<n; i++)
        {
            
            if(mp1.find(s[i]) != mp1.end()){
                
                if(mp1[s[i]] != t[i]){
                    return false;
                }
            }else{
                    if(mp2.find(t[i]) != mp2.end()){
                        return false;
                    }else{
                         mp1.insert({s[i], t[i]});
                         mp2.insert({t[i], true});
                    }
                }
        }
        
        return true;
    }
};