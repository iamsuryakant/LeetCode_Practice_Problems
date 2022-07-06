class Solution {
public:
    
    int solve(int i, int j,int n, vector<vector<int>>& triangle,
             vector<vector<int>>& dp){
        
        if(i == n-1)
            return triangle[n-1][j];
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int down = triangle[i][j] + solve(i+1, j, n, triangle, dp);
        int dia = triangle[i][j] + solve(i+1, j+1, n, triangle, dp);
        
        return dp[i][j] = min(down, dia);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        
        vector<vector<int>>dp(n, vector<int>(n, 0));
        
        for(int j = 0;j<n; j++)
        {
            dp[n-1][j] = triangle[n-1][j];
        }
        
        for(int i = n-2; i>=0; i--)
        {
           
            for(int j = i; j>=0; j--)
            {
               int down = triangle[i][j] + dp[i+1][j];
               int dia = triangle[i][j] + dp[i+1][j+1];
               dp[i][j] = min(down, dia);
               
            }
           
        }
        
        return dp[0][0];
        
        
       // return solve(0, 0, n, triangle, dp);
    }
};