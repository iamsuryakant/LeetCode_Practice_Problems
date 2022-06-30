class Solution {
public:
    int firstUniqChar(string s) {
        
      int count[256] = {0};
        
        for(int i = 0; i<s.length(); i++)
        {
            count[s[i]]++;
        }
        
        bool flag = false;
        int ans = -1;
        for(int i = 0; i<s.length(); i++){
            if(count[s[i]] == 1){
                ans = i;
                flag = true;
                break;
            }
            
        }
        
        if(flag)
        {
            return ans;
        }
        
        return -1;
        
    }
};