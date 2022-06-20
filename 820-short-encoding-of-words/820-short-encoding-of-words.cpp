class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string>s1(words.begin(),words.end());
        set<string>s2(words.begin(),words.end());
        
       
        
        for(auto it : s1){
            for(int i = 1;i < it.length();i++){
                s2.erase(it.substr(i,it.length()-i));
            }
        }
        
         // for(auto it:s2)
         //    cout<<it<<" ";
        
        int ans = 0;
        for(auto it : s2){
            ans += (it.length()+1);
        }
        return ans;
    }
};