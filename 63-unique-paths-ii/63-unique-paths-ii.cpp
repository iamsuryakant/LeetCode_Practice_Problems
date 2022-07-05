class Solution {
public:
    
    int path(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&dp){
        
        if(i >= 0 && j >= 0 && grid[i][j] == 1)
            return 0;
        
        if(i == 0 && j == 0)
            return 1;
        
        if(i < 0 || j< 0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int left = 0, up = 0;
        
        
        up = path(i-1,j, grid, dp);
        left = path(i, j-1, grid, dp);
            
        
        return dp[i][j] = (up + left);
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        //cout<<m<<" "<<n<<endl;
        
        vector<vector<int>>dp(m, vector<int>(n, -1));
        
        return path(m-1, n-1, obstacleGrid, dp);
    }
};