// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends





int path(int i, int j, vector<vector<int>>&dp){
        
        // if(i >= 0 && j >= 0 && grid[i][j] == 1)
        //     return 0;
        
        if(i == 0 && j == 0)
            return 1;
        
        if(i < 0 || j< 0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int left = 0, up = 0;
        
        
        up = path(i-1,j,  dp);
        left = path(i, j-1,  dp);
            
        
        return dp[i][j] = (up + left);
    }
    
    
long long numberOfPaths(int m , int n){
    vector<vector<int>>dp(m, vector<int>(n, -1));
        
    return path(m-1, n-1, dp);
}
    
    
// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends