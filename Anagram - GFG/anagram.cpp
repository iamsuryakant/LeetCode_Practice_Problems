// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        // Your code here
        int n = s.length();
        int m = t.length();
        
        if(n != m){
            return false;
        }
        
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//         return (s == t);
        int count[256] = {0};
        
        for(int i = 0; i<n; i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        
        for(int i = 0; i<256; i++)
        {
            if(count[i] != 0)
                return false;
        }
        
        return true;
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends