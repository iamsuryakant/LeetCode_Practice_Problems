class Solution {
public:
    string reverseWords(string s) {
        
        if(s.length() == 0){
            return s;
        }
        
        stack<string> st;
        string res;
        
        for(int i = 0; i<s.length(); i++)
        {
            string w;
            
            if(s[i] == ' ')
            {
                continue;
            }
            
            while(i<s.length() && s[i] != ' ')
            {
                if(s.length() == 0)
                    return s;
                    
                w += s[i];
                i++;
            }
            st.push(w);
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
            
            if(!st.empty())
                res += " ";
        }
        
        return res;
    }
};