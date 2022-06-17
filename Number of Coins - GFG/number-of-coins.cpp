// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	
	int coinch(int coins[], int s,int n, vector<int>&dp)
    {
        if(s == 0)
            return 0;
        
        if(s < 0)
            return INT_MAX;
        
        if(dp[s] != -1)
        {
            return dp[s];
        }

        
        int minc = INT_MAX;
        
        for(int i = 0; i<n; i++)
        {
            int ans = coinch(coins, s - coins[i], n, dp);
            
            if(ans != INT_MAX){
                minc = min(1+ans, minc);
            }
        }
        dp[s] = minc;
        
        return dp[s];
        
    }
    
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<int>dp(V+1, -1);
	    int ans = coinch(coins, V, M, dp);
	    
	    if(ans == INT_MAX)
	        return -1;
	    return ans;
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends