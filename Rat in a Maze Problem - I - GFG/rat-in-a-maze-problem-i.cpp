// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    bool isSafe(int x, int y, int n,vector<vector<int>>vis,vector<vector<int>>m){
        
        if((x>= 0 && x< n) && (y >= 0 && y<n) && vis[x][y] == 0 && m[x][y] == 1){
            return true;
        }
        
        return false;
    }
    
    
    void solve(int n, vector<vector<int>>&m, int x, int y,
                vector<string> &ans, string path,vector<vector<int>>&vis){
                        
        //base case                
        if(x == n-1 && y == n-1)
        {
            ans.push_back(path);
            return;
        }
        
        vis[x][y] = 1;
        
        //down
        
        int new_x = x+1;
        int new_y = y;
        
        if(isSafe(new_x, new_y, n, vis, m)){
            //vis[new_x][new_y] == 1;
            path.push_back('D');
            solve(n, m, new_x, new_y, ans, path, vis);
            path.pop_back();
        }
        
        //left
        
        new_x = x;
        new_y = y-1;
        
        if(isSafe(new_x, new_y, n, vis, m)){
            path.push_back('L');
            solve(n, m, new_x, new_y, ans, path, vis);
            path.pop_back();
        }
        
        //right
        
        new_x = x;
        new_y = y+1;
        
        if(isSafe(new_x, new_y, n, vis, m)){
            path.push_back('R');
            solve(n, m, new_x, new_y, ans, path, vis);
            path.pop_back();
        }
        
        //up
        
        new_x = x-1;
        new_y = y;
        
        if(isSafe(new_x, new_y, n, vis, m)){
            path.push_back('U');
            solve(n, m, new_x, new_y, ans, path, vis);
            path.pop_back();
        }
        
        vis[x][y] = 0;
                    
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0] == 0)
        {
            return ans;
        }
       
        int x = 0;
        int y = 0;
        
        vector<vector<int>> vis(n, vector<int>(n, 0));
        
        string path = "";
        
        solve(n, m, x, y, ans, path, vis);
        
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends