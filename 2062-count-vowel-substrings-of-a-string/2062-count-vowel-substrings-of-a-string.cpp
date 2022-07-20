class Solution {
public:
    
    bool isVowel(char s)
    {
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
        {
            return true;
        }
        return false;
    }
    
    
    int countVowelSubUtil(string s)
    {
        int count = 0;
        
        int n = s.length();
        
        map<char, int> mp;
        
        int st = 0;
        
        for(int i = 0; i<s.length(); i++){
            
            mp[s[i]]++;
        
         // If substring till now have all vowels
        // atleast once increment start index until
        // there are all vowels present between
        // (start, i) and add n - i each time
        
            while(mp['a'] > 0 && mp['e'] > 0
                   && mp['i'] > 0 && mp['o'] > 0
                   && mp['u'] > 0) {
                count += n - i;
                mp[s[st]]--;
                st++;
            }
        }
        
        return count;
    }
    
    
    int countVowelSubstrings(string word) {
        
        int count = 0;
        
        string temp = "";
        
        for(int i = 0; i<word.length(); i++ )
        {
            if(isVowel(word[i]))
            {
                temp += word[i];
            }else{ //// The sub-string containing all vowels ends here
                if(temp.length() > 0)
                {
                    count += countVowelSubUtil(temp);
                }
                
                temp = ""; //reset the string
            }
        }
        
        // For the last valid sub-string
        if (temp.length() > 0)
            count += countVowelSubUtil(temp);

        return count;
        
    }
};