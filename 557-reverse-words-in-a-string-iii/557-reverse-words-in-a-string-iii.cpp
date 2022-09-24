class Solution {
public:
    
//     void reverses(string s)
//     {
//        reverse(s.begin(), s.end());
//     }
    
    
    
    string reverseWords(string s) {
        
        
        // string temp;
        
        int j = 0;
        
        for(int i = 0;i<s.length(); i++)
        {
            if(s[i] == ' '){
                
                reverse(s.begin()+j, s.begin()+i);
                j = i+1;
            }
        }
        // ans += " ";
        reverse(s.begin()+j, s.end());
        
        
        return s;
        
    }
};