class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        map<char, int> mp;

        int count = 0;

        int i = 0;

        for(int j = 0; j<n; j++){

            if(mp.find(s[j]) != mp.end()){

                i = max(i, mp[s[j]]+1);
            }

            mp[s[j]] = j;
            count = max(count, j-i+1);
        }

        return count;
    }
};