// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here  
        set<char>st;
        
        unordered_map<char, int>mp;
        
        for(char x:str)
        {
            st.insert(x);
        }
        
        int ans = str.size();
        
        int i = 0, j = 0;
        while(i<str.size()){
            mp[str[i]]++;
            
            if(mp.size() == st.size())
            {
                while(mp[str[j]]>1)
                {
                    mp[str[j++]]--;
                }
                
                ans = min(ans, i-j+1);
            }
            i++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends