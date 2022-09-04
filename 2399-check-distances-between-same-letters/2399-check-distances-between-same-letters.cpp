class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        set<char> st;
        set<char> st1;
        
        int count2[26] = {0};
        
        for(int i = 0; i<s.length(); i++)
        {
            int count = 0;
            if((st.find(s[i]) == st.end())){
                for(int j = i+1; j<s.length(); j++)
                {
                    if((s[i] != s[j]))
                    {
                        count++;
                        continue;
                    }else{
                        break;
                    }
                }
            }
            st.insert(s[i]);

            count2[s[i] - 'a'] += count;

        }
        
        for(int i = 0; i<s.length(); i++)
        {
            
            if(st1.find(s[i]) == st1.end()){
                
                if(count2[s[i] - 'a'] == distance[s[i] - 'a']){
                    continue;
                }else{
                    return false;
                }
                // cout<<distance[s[i] - 'a']<<" ";
            }
            
            st1.insert(s[i]);
            // if(count2[s[i] - 'a'] == distance[i]){
            //     continue;
            // }
            // else{
            //     return false;
            //  //   break;
            // }
        }
        
        
        return true;
    }
};