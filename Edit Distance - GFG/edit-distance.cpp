// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
     int mini(string s1, string s2, int n, int m, 
            vector<vector<int>>&dp){
        
        if(n == 0)
            return m;
        
        if(m == 0)
            return n;
        
        if(dp[n][m] != -1)
        {
            return dp[n][m];
        }
        
        if(s1[n-1] == s2[m-1])
        {
            return dp[n][m] = mini(s1, s2, n-1, m-1, dp);
        }
        
        return dp[n][m] = 1+min(mini(s1, s2, n-1, m, dp), //insert
                                min(mini(s1, s2, n, m-1, dp), // remove
                               mini(s1, s2, n-1, m-1, dp))); // replace
        
    }
    
  
    int editDistance(string s, string t) {
        // Code here
        int n = s.length();
        int m = t.length();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return mini(s, t, n, m, dp);
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends